#include<stdio.h>
#include<time.h>
#include<windows.h>
int delay()
{
    int a=1000000000;
    int num=0;
    for(int i=0; i< a;i++){
        num += i;
    }
}
int main(){
    // 计算运算时间，单位为秒
    time_t start, end;
    time(&start);
    system("pause");
    time(&end);

    printf("%d\n", start);
    printf("%d\n", end);

    // 计算运算时间，单位为毫秒
    DWORD start, stop;
    start = GetTickCount();
    delay();
    stop = GetTickCount();
    printf("time: %lld ms\n", stop-start);

    return 0;
}