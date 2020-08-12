#include<stdio.h>
#define size 10
long getArrSize(double *arr);
int main(){
    double arr[size];
    for(int i=0; i<size;i++){
        arr[i] = i*1.25;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%lf\n", arr[i]);
    }
    return 0;
}