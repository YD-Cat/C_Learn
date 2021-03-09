#include <stdio.h>
#include <string.h>
// 字符串
/* C语言中，字符串只能通过字符数组的方式创建
   字符串以'\0'结尾，实际长度为比有效字符串长度+1
*/
int main(){
    // 通过指定数组大小的方式创建，需要预留一个元素来存放'\0'
    char str1[15] = {'h', 'e', 'l', 'l', 'o'};
    printf("str1: %s, address: %p\n", str1, &str1);

    // 类似于java的创建方式，但是类型是字符数组
    // 没有指定数组大小，但是系统自动的在结尾处添加了'\0'作为结束符
    char str2[] = "world";
    printf("str2: %s, address: %p\n", str2, &str2);
    char str3[] = "str3_";
    printf("str3: %s, address: %p\n", str3, &str3);

    printf("\n--将str2复制到str1后\n");
    strcpy(str1, str2);
    printf("str1: %s, address: %p\n", str1, &str1);
    printf("str2: %s, address: %p\n", str2, &str2);
    printf("str3: %s, address: %p\n", str3, &str3);
    printf("\n--将str3复制到str1后\n");
    strcpy(str2, str3);
    printf("str1: %s, address: %p\n", str1, &str1);
    printf("str2: %s, address: %p\n", str2, &str2);
    printf("str3: %s, address: %p\n", str3, &str3);

    printf("\n--将str2连接到str1后\n");
    strcat(str1, str2);
    printf("str1: %s, address: %p\n", str1, &str1);
    printf("str2: %s, address: %p\n", str2, &str2);
    printf("str3: %s, address: %p\n", str3, &str3);

    printf("\n--输出字符串的长度\n");
    printf("str1: %s, address: %p, len: %d\n", str1, &str1, strlen(str1));
    printf("str2: %s, address: %p, len: %d\n", str2, &str2, strlen(str2));
    printf("str3: %s, address: %p, len: %d\n", str3, &str3, strlen(str3));

    printf("\n--对比字符串\n");
    printf("str1:str2->%d\n", strcmp(str1, str2));
    printf("str2:str3->%d\n", strcmp(str2, str3));

    printf("\n--获取字符'3'在str1出现的位置，返回的是指针，指向str1中字符'3'出现的地址\n");
    char *p = strchr(str1, '3');
    if(p!=NULL){
        printf("%c\n", *p);
    }else{
        printf("not found the char\n");
    }

    printf("\n--获取str2在str1出现的位置，返回的是指针，指向str1中字符串值为str2出现的地址\n");
    p = strstr(str1, str2);
    if(p!=NULL){
        printf("%c\n", *(p+0));
        printf("%c\n", *(p+1));
        printf("%c\n", *(p+2));
        printf("%c\n", *(p+3));
    }else{
        printf("not found the string\n");
    }
    printf("\n--将str1转为大写\n");
    char *tt = strupr(str1);
    for(int i=0; i<strlen(str1); i++){
        printf("%c", *(tt+i));
    }

    return 0;
}