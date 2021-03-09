#include "stdio.h"
// 整型
int main(void){
    short s = 10;
    int i = 306587;
    long l = 2816645900;
    printf("%d\n",i);

    printf("----------------\n");

    int a = 0b101;
    int b = -0b110010;
    int c = 0B100001;
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);

    printf("----------------\n");

    short sa = 0b1010110;
    int ib = 02713;
    long lc = 0x1dab83;
    printf("a=%#ho, b=%#o, c=%#lo\n",sa,ib,lc);
    printf("a=%#hd, b=%#d, c=%#ld\n",sa,ib,lc);
    printf("a=%#hx, b=%#x, c=%#lx\n",sa,ib,lc);
    printf("a=%#hX, b=%#X, c=%#lX\n",sa,ib,lc);

    int ii = -1;
    if(ii){
        printf("真");
    }else{
        printf("假 ");
    }
}