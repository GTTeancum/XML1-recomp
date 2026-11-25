"""Verify the installer extractor's #37 fix using no retail assets."""
import argparse
import struct
import subprocess
import tempfile
import zipfile
from pathlib import Path

from xml1_packages import Resource, read_pkgb

cli = argparse.ArgumentParser(description=__doc__)
cli.add_argument("--driver", type=Path, required=True)
args = cli.parse_args()

zone = "maps/nyc/fb/nyc_fb4"
model = "models/pickups/pickup_comicbook"
package = Path("packages/generated/maps/package/nyc/fb/nyc_fb4.pkgb")
stock = (b'<world><entity name="world" mission="sent_fb"/><entity name="sentinel"/>'
         b'<entinst type="sentinel"><inst name="stock_encounter" pos="0 1 2"/></entinst></world>')
model_bytes = b"synthetic Xbox model fixture"

def record(name, kind, data):
    return struct.pack("<128s64sI", name.encode(), kind.encode(), len(data)) + data

def put(root, name, data):
    p = root / name
    p.parent.mkdir(parents=True, exist_ok=True)
    p.write_bytes(data)

def setup(case, config=stock, supply_model=True, register_model=False, overlay=None, raw=False):
    case.mkdir()
    root = case / "game"
    root.mkdir()
    if overlay:
        put(root, *overlay)
    original = case / "assetsfb.zip"
    with zipfile.ZipFile(original, "w") as archive:
        bundle = record("on", "combat_is", b"")
        if register_model:
            bundle += record(model + ".igb", "model", model_bytes)
        bundle += record(zone + ".eng", "zonexml", config)
        bundle += record(zone + ".fre", "zonexml", config)
        bundle += record("off", "combat_is", b"")
        archive.writestr(package.with_suffix(".fb").as_posix(), bundle)
        if supply_model:
            # The stock Xbox model is available only after another FB is extracted.
            archive.writestr("zzz_shared.fb", record(model + ".igb", "model", model_bytes))
    original_bytes = original.read_bytes()
    output = case / "stage"
    mode = [str(original), str(output)] if raw else [
        "--extract-for-install", str(original), str(output), str(root)]
    subprocess.run([str(args.driver.resolve()), *mode], check=True, capture_output=True)
    assert original.read_bytes() == original_bytes
    assert (output / (zone + ".eng")).read_bytes() == config
    assert (output / (zone + ".fre")).read_bytes() == config
    assert not (output / (zone + ".freb")).exists()
    if overlay:
        assert (root / overlay[0]).read_bytes() == overlay[1]
    return output

with tempfile.TemporaryDirectory(prefix="xml1-comic-test-") as temp:
    work = Path(temp)
    install = setup(work / "install")
    fixed = (install / (zone + ".engb")).read_bytes()
    for needle in (b"comic_nightcrawler\0", b"925.941 2619.81 244.444\0",
                   b"textures/comic/night_cov.png", b"stock_encounter\0"):
        assert needle in fixed, needle
    assert (install / (model + ".igb")).read_bytes() == model_bytes
    data = read_pkgb((install / package).read_bytes())
    expected = [
        Resource("combat_is", (("filename", "on"),)),
        Resource("model", (("filename", model),)),
        Resource("zonexml", (("filename", zone),)),
        Resource("combat_is", (("filename", "off"),)),
    ]
    assert data == expected, data
    preloaded = setup(work / "preloaded", register_model=True, supply_model=False)
    assert (preloaded / (zone + ".engb")).read_bytes() == fixed
    assert read_pkgb((preloaded / package).read_bytes()) == expected
    retry = setup(work / "retry", overlay=(zone + ".engb", fixed))
    assert (retry / (zone + ".engb")).read_bytes() == fixed
    for name, options in {
        "raw-extract": dict(raw=True),
        "no-model": dict(supply_model=False),
        "different-mission": dict(config=stock.replace(b"sent_fb", b"other")),
        "already-present": dict(config=stock.replace(b'name="sentinel"', b'name="COMIC_NIGHTCRAWLER"')),
        "text-overlay": dict(overlay=(zone + ".eng", b"<custom/>")),
        "binary-overlay": dict(overlay=(zone + ".engb", b"custom")),
        "package-overlay": dict(overlay=(package, b"custom")),
    }.items():
        stage = setup(work / name, **options)
        assert not (stage / (zone + ".engb")).exists(), name
        assert read_pkgb((stage / package).read_bytes()) == expected[:1] + expected[2:], name

print("PASS Nightcrawler inline extraction (stock assets, manifest order, retries, locale and overlay guards)")
