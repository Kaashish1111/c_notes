#include<stdio.h>
int main()
{
    int n,a=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=2;i=i<=n-1;i++)
    {
        if(n%i==0)
        {
            a=1;
            break;
        }
    }
        if(n==1)
        printf("The number is neither prime nor composite");
        else if(a==0)
        printf("The given number is prime");
        else
        printf("The number is composite");
    return 0;
}