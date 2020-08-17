#include<stdio.h>
// char
int main(void){
    char a = '\61';
    char b = '\141';
    char c = '\x31';
    char d = '\x61';
    char *str1 = "\x31\x32\x33\x61\x62\x63";
    char *str2 = "\61\62\63\141\142\143";
    char *str3 = "The string is: \61\62\63\x61\x62\x63";

    printf("a: %c\n",a);
    printf("b: %c\n",b);
    printf("c: %c\n",c);
    printf("d: %c\n",d);

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("str3: %s\n", str3);
    puts("\x68\164\164\x70://c.biancheng.\x6e\145\x74");
}