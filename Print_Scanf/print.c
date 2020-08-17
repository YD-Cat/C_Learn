#include<stdio.h>
// 屏幕输出
int main(void){

    int a1=20, a2=345, a3=700, a4=22;
    int b1=5670, b2=9999, b3=20202, b4=4;
    int c1=23333, c2=33333, c3=334, c4=22412;
    int d1=23, d2=110, d3=1200, d4=2020;

    printf("%-9d %-9d %-9d %-9d\n", a1, a2, a3, a4);
    printf("%-9d %-9d %-9d %-9d\n", b1, b2, b3, b4);
    printf("%-9d %-9d %-9d %-9d\n", c1, c2, c3, c4);
    printf("%-9d %-9d %-9d %-9d\n", d1, d2, d3, d4);

    return 0;
}