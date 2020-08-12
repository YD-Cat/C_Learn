#include<stdio.h>
/**
 * 1.变量保存着值，而变量需要放在一个地方上
 * 2.指针正是指向着这个地方
 */

int main(){
    int var = 20;
    int *ip;
    ip=&var;
    printf("-----------------------\n");
    printf("var: %#x\n", &var);
    printf("ip: %#x\n", ip);
    printf("value of var: %d\n", var);
    printf("value of ip: %d\n", *ip);
    
    printf("-----------------------\n");
    *ip=10;
    printf("var: %#x\n", &var);
    printf("ip: %#x\n", ip);
    printf("value of var: %d\n", var);
    printf("value of ip: %d\n", *ip);

    printf("-----------------------\n");
    var=30;
    printf("var: %#x\n", &var);
    printf("ip: %#x\n", ip);
    printf("value of var: %d\n", var);
    printf("value of ip: %d\n", *ip);       

    return 0;
}