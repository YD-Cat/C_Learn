#include<stdio.h>
#include<time.h>
int delay()
{
    int a=10000000;
    int num=0;
    for(int i=0; i< a;i++){
        num *= i;
    }
}

int main(){
    time_t start, end;
    time(&start);
    system("pause");
    time(&end);

    printf("%d", start);
    printf("%d", end);

    return 0;
}