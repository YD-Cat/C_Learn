#include<stdio.h>
/**
 * 指针
 * 1.变量保存着值，而变量需要放在一个地方上
 * 2.指针正是指向着这个地方
 */
int main(){
    int var = 20;
    int *ip;
    ip=&var; // 将指针指向一个变量的地址
    printf("-----------------------\n");
    printf("var: %#x\n", &var);
    printf("ip: %#x\n", ip);
    printf("value of var: %d\n", var);
    printf("value of ip: %d\n", *ip);
    
    printf("-----------------------\n");
    *ip=10; // 将指针指向的地址上的值变成10，也改变了变量的值
    printf("var: %#x\n", &var);
    printf("ip: %#x\n", ip);
    printf("value of var: %d\n", var);
    printf("value of ip: %d\n", *ip);

    printf("-----------------------\n");
    var=30; // 变量自己改变自身的值，指针所指向的地址上的值也改变
    printf("var: %#x\n", &var);
    printf("ip: %#x\n", ip);
    printf("value of var: %d\n", var);
    printf("value of ip: %d\n", *ip);       

    return 0;
}