#include<stdio.h>
enum DAY{
    MON=1, TUE, WED, THU, FRI, SAT, SUN
};
int main(){
    enum DAY dd = WED;
    printf("%d\n", dd);
    int i=1;
    dd = (enum DAY)i;
    printf("%d\n", dd);
    return 0;
}