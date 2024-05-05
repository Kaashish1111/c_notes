#include<stdio.h>
int main(void)
{
    //gp 1,2,4,8,16,32,64........
    int a=1,n;
    printf("Enter the term till which u want to display:");
    scanf("%d",&n);
    for(int i;i<=n;i++)
    {
        printf("%d ",a);
        a=a*2;
    }
    return 0;
}