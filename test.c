#include<stdio.h>
#include<time.h>
#include<windows.h>
int delay()
{
    int a=10000000;
    int num=0;
    for(int i=0; i< a;i++){
        num *= i;
    }
}
// 计算运算时间，单位为秒
int main(){
    time_t start, end;
    time(&start);
    system("pause");
    time(&end);

    printf("%d\n", start);
    printf("%d\n", end);

    return 0;
}