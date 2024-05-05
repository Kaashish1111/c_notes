#include<stdio.h>
int main(void)
{
    //3,12,48....
    int n,a=3;
    printf("Enter the term till which u want to display:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d ",a);
        a=a*4;
    return 0;
    }
}