#include <stdio.h>
// 浮点数
int main(void){
    float a = 0.302;
    float b = 128.101;
    double c = 123;
    float d = 112.64E3;
    double e = 0.7623e-2;
    float f = 1.23002398;

    printf("a=%e\n",a);
    printf("b=%f\n",b);
    printf("c=%lf\n",c);
    printf("d=%lE\n",d);
    printf("e=%lf\n",e);
    printf("f=%f\n",f);

    printf("----------------\n");

    float v = 251;
    int w = 19.427;
    int x = 92.78;
    int y = 0.52;
    int z = -87.27;
    printf("v=%f, w=%d, x=%d, y=%d, z=%d\n",v,w,x,y,z);
}