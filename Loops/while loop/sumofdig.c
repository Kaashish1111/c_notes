#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int sum=0,ld;
    while(n!=0)
    {
        ld=n%10;
        n=n/10;
        sum=sum+ld;
    }
    printf("The sum of digits of given number is %d",sum);
    return 0;
}