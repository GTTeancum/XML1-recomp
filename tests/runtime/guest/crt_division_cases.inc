/* Exercise the actual translated CRT bodies, including the reported animation
 * wrap operands. A native division oracle catches missing carry propagation. */
static uint64_t rng=0x1509212026ULL;
static uint64_t next(void){rng^=rng<<13;rng^=rng>>7;rng^=rng<<17;return rng;}
static int check(unsigned fn,uint64_t n,uint64_t d) {
    void (*functions[])(void)={sub_00342E20,sub_00343460,sub_003436B0,sub_00343B30,sub_00343BF0,sub_00349070};
    int sign=fn==0||fn==3||fn==4;
    if(!d||(sign&&n==UINT64_C(0x8000000000000000)&&d==UINT64_MAX))return 0;
    uint64_t q=sign?(uint64_t)((int64_t)n/(int64_t)d):n/d;
    uint64_t r=sign?(uint64_t)((int64_t)n%(int64_t)d):n%d;
    esp=2048;ebx=0x11223344;esi=0x55667788;edi=0x12345678;g_ebp=g_seh_ebp=0x87654321;
    MEM32(esp)=0x1234;MEM32(esp+4)=(uint32_t)n;MEM32(esp+8)=(uint32_t)(n>>32);
    MEM32(esp+12)=(uint32_t)d;MEM32(esp+16)=(uint32_t)(d>>32);
    functions[fn]();
    uint64_t got=((uint64_t)edx<<32)|eax,want=(fn==1||fn==3)?r:q;
    if(got!=want || esp!=2068 || esi!=0x55667788 || edi!=0x12345678 ||
       (fn<4 && ebx!=0x11223344) || (fn>=4 && (((uint64_t)ebx<<32)|ecx)!=r)) {
        fprintf(stderr,"FAIL fn=%u n=%llu d=%llu got=%llu want=%llu remainder=%llu expected=%llu esp=%u\n",fn,n,d,got,want,((uint64_t)ebx<<32)|ecx,r,esp);return 1;
    }
    return 0;
}
int main(void) {
    uint64_t edges[]={1,2,0x7fffffff,0x80000000,0xffffffff,0x100000000ULL,0x100000001ULL,0x7fffffffffffffffULL,0x8000000000000000ULL,UINT64_MAX};
    unsigned count=0;
    for(unsigned fn=0;fn<6;++fn) {
        if(check(fn,11412013007ULL,6666666507ULL))return 1;
        for(unsigned i=0;i<10;++i)for(unsigned j=0;j<10;++j){if(check(fn,edges[i],edges[j]))return 1;++count;}
        for(unsigned i=0;i<20000;++i){uint64_t n=next(),d=next()|1;if(i%3==0)d=(uint32_t)d;if(check(fn,n,d))return 1;++count;}
    }
    printf("PASS %u CRT division/remainder cases plus six animation-wrap regressions\n",count);return 0;
}
