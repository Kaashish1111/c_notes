#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x>99 && x<1000)
    {
    printf("The number is a three digit number");
    }
    else{
        printf("The number is not a three digit number");
    }
    return 0;
}
