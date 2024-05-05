#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int r=0,ld;
    while(n!=0)
    {
        ld=n%10;
        n=n/10;
        r=r*10;
        r=r+ld;
    }
    printf("The reverse of given number is %d",r);
    return 0;
}