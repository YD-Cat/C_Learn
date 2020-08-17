#include<stdio.h>
// 位运算符
int main(){
    int a = 60; /* 60 = 0011 1100 */ 
    int b = 13; /* 13 = 0000 1101 */
    int c = 0;
    c=a&b; // 0000 1100
    printf("Line 1 - c 的值是 %d\n", c);
    c = a|b; // 0011 1101
    printf("Line 2 - c 的值是 %d\n", c);
    c=a^b; // 0011 0001
    printf("Line 3 - c 的值是 %d\n", c);
    c=~a; // 1100 0011
    printf("Line 4 - c 的值是 %d\n", c);
    c=a<<2; // 1111 0000
    printf("Line 5 - c 的值是 %d\n", c);
    c=a>>2; // 0000 1111
    printf("Line 6 - c 的值是 %d\n", c);
}