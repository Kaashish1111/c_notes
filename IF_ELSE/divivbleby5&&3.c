#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x%5==0&&x%3==0)
    {
        printf("The number is divisble by 5 and 3");
    }
    else
    {
        printf("The number is not divisble by 5 and 3");
    }
    return 0;
}
