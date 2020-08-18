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

    printf("\n");

    // 指针数组
    // 本质是一个数组，元素都是指针
    printf("-----------指针数组-----------\n");
    int a[5] = {1,2,3,4,5};
    int *p_1[5]; // 指针数组
    int *p_1_a = a; // 一个指向数组的指针
    for(int i=0; i<5; i++){
        p_1[i] = &a[i]; // 将数组的各个元素指针指向一个int
        printf("a[%d] val: %d address: %p\n" ,i ,a[i], &a[i]);
        printf("p_1_a[%d] val: %d address: %p\n" ,i ,*(p_1_a+i) ,p_1_a+i);
    }
    printf("\n");
    for(int i=0; i<5; i++){
        printf("p_1[%d] val: %d address: %p\n",i, *p_1[i], p_1[i]);
    }

    printf("\n");
    
    // 尚未理清
    printf("-----------数组指针-----------\n");
    // 一维数组     数组指针主要针对二维数组，先不考虑一维数组
    // int arr_1[] = {1,2,3,4,5,6,7,8,9,0};
    // int (*pArr_1)[3];
    // pArr_1 = arr_1; // 指向一个一维数组

    // printf("%d: %p\n", arr_1[0], &arr_1[0]);
    // printf("%d: %p\n", *pArr_1[0], pArr_1[0]);
    // pArr_1++;
    // printf("%d: %p\n", *pArr_1[3], pArr_1);

    // 二维数组
    int arr_2[2][3] = {{1,2,3},{4,5,6}};
    int (*pArr_2)[3]; // 定义一个指针，指向一个拥有三个元素的数组
    pArr_2=arr_2;
    printf("%d: %p\n",arr_2[0][0], arr_2);
    printf("%d: %p\n",arr_2[0][0], &arr_2[0]);
    printf("%d: %p\n", *(*(pArr_2+0)), pArr_2); // 输出第二维第一个数组中的第一个元素，和其地址
    pArr_2++; // 跳过，步长为2，跳过2个元素
    printf("%d: %p\n",arr_2[1][0], arr_2[0]);
    printf("%d: %p\n", (*pArr_2)[0], pArr_2); // 输出跳过之后的第二维的第一个数组中的第一个元素，和其地址

    printf("-------------------------\n");
    return 0;
}