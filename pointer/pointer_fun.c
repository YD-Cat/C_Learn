#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// 取最大值
int max(int x, double y){
    return x>=y?x:y;
}

// 接收一个int，循环count次，每次自增
// 接受一个函数，将循环自增后的x和y对比，取最大值
int forFunc(int x, int count, int y, int(*p)(int, double)){
    for(int i=0; i< count; i++){
        x++;
    }
    return p(x,y);
}

void populate_array(int *array, int arraySize, int (*getNextValue)(void)){
    int i;
    for ( i = 0; i < arraySize; i++)
    {
        *(array+i)=getNextValue();
    }
}

int getNextRandomValue(){
    return rand();
}

int main(){
    // 指向函数的指针
    int x = 3;
    double y = 7;
    int (*p)(int, double); // 声明一个指针，指向一个函数，接收的第一个参数是int，第二个参数是double， 返回值是int类型
    p=&max; // 改指针指向函数名为max的函数
    int i = p(x, y);
    printf("%d\n", i);

    // 函数指针作为回调函数使用
    int j = forFunc(x, 5, y, &max);
    printf("%d\n", j);

    int array[10];
    srand((unsigned)time(NULL));
    populate_array(array, 10, &getNextRandomValue);
    for (int k = 0; k < 10; k++){
        printf("%d ", array[k]);
    }
    return 0;
}