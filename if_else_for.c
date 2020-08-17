#include<stdio.h>
#include<time.h>
#define true 1 // C没有布尔值，大于0为true
// 判断和循环
int main(){
    time_t startTime;
    struct tm *p;
    time(&startTime);
    p=gmtime(&startTime);
    printf("%d\n",startTime);

    int number = 38;
    int scanfNum = 0;
    int count = 1;
    while(true){
        printf("输入数字：");
        scanf("%d", &scanfNum);
        if(scanfNum < number){
            printf("小于猜想的数字\n");
            count++;
        }else if(scanfNum > number){
            printf("大于猜想的数字\n");
            count++;
        }else{
            printf("猜想正确\n");
            break;
        }
    }
    printf("游戏结束！数字为：%d，一共猜想了%d次\n", number, count);
    return 0;
}