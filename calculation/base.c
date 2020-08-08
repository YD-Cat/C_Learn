#include<stdio.h>
int main(){
    int a= 12;
    int b= 100;
    float c= 8.5;

    int m= a+b;
    float n= b*c;
    double p= a/c;
    int q= b%a;

    printf("m=%d, n=%f, p=%lf, q=%d\n",m,n,p,q);

    scanf("%d %d", &a, &b);
    printf("result=%d\n",a/b);
    return 0;
}