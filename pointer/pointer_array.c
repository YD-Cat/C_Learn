#include<stdio.h>
// 指针和数组
int main(){
    // 指针->数组
    printf("----------指针->数组----------\n");
    int x[10] = {1,2,3,4,5,6,7,8,9,0};
    int *p = x; // 指向第一个元素的地址
    printf("x address: %p\n", x);
    printf("x[0] address: %p\n", &x[0]);
    printf("p address: %p\n", p); // 指向第一个元素的地址
    printf("*p: %d\n", *p); // 输出第一个元素
    printf("p[2]: %d\n", p[2]); // 输出第三个元素，使用形式和数组一致，考虑之后不使用此形式，容易造成混淆
    printf("*(p+2): %d\n", *(p+2)); // 输出第三个元素
    printf("x[2] address: %p\n", &x[2]);
    printf("p[2] address: %p\n", p+2); // 输出第三个元素的地址
    p+=2; // 移动指针，步长为2个int长度
    printf("p+=2->*p: %d\n", *p); // 输出跳过之后的第一个元素
    printf("p+=2->p[2]: %d\n", p[2]);// 输出跳过之后的第三个元素，使用形式和数组一致，考虑之后不使用此形式，容易造成混淆

    p = &x[2]; // 指向int，需要添加&
    printf("*p = x[2] address: %p\n", p);
    printf("*p = x[2] address: %d\n", *p);

    // 尚未理清
    // printf("----------数组指针----------\n");
    // // 一维数组
    // int arr_1[] = {1,2,3,4,5,6,7,8,9,0};
    // int (*pArr_1)[5];
    // pArr_1 = arr_1; // 指向一个一维数组

    // printf("%d: %p\n", arr_1[0], &arr_1[0]);
    // printf("%d: %p\n", *pArr_1[0], pArr_1);

    // 二维数组
    // int arr_2[2][3] = {{1,2,3},{4,5,6}};
    // int (*pArr_2)[2];
    // pArr_2=arr_2;
    // printf("%d: %p\n",arr_2[0][0], arr_2[0]);
    // printf("%d: %p\n", (*pArr_2)[0], pArr_2); // 输出第二维第一个数组中的第一个元素，和其地址
    // pArr_2++; // 跳过，步长为2，跳过2个元素
    // printf("%d: %p\n",arr_2[1][0], arr_2[0]);
    // printf("%d: %p\n", (*pArr_2)[0], pArr_2); // 输出跳过之后的第二维的第一个数组中的第一个元素，和其地址

    printf("-------------------------\n");
    return 0;
}