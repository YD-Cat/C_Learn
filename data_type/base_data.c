#include<stdio.h>
#include<float.h>

// int main(){
//     int i = 1;
//     printf("int data:%d", i);
//     return 0;
// }

extern int i;
int main(){
    printf("float 最大存储字节数: %lu\n", sizeof(float));
    printf("float 最小值: %E\n", FLT_MIN );
    printf("float 最大值: %E\n", FLT_MAX );
    printf("float 精度值: %d\n", FLT_DIG);
    int i = 1;
    printf("%d", i);


    return 0;
}