#include<stdio.h>
#define size 3 // 宏定义
// 指针计算
int main(){
    int var[size]={20,21,22};
    int *ptr = var;
    for(int i=0; i< size; i++){
        printf("var: %d\n", var[i]);
        printf("var address: %X\n", &var[i]);
        printf("ptr: %d\n", *ptr);
        printf("ptr address: %p\n", ptr);
        ptr++;
    }
    return 0;
}