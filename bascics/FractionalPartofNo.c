#include<stdio.h>
int main(){
    float x;
    printf("Enter a decimal number");
    scanf("%f",&x);
    int y;
    y=x;
    float z=x-y;
    printf("The fractional part of the given number=%f",z);
    return 0;
    }
