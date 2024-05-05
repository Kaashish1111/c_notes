#include<stdio.h>
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    if(n%5==0)
    {
        printf("The number is divible by 5");
    }
    else
    {
        printf("the number is not divisble by 5");
    }
    return 0;
    }
