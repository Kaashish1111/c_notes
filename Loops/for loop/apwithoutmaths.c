#include<stdio.h>
int main()
{
    // Aim is to print ap-4,7,10,13.......upto n terms
    int n,i;
    printf("Enter a term till which u want to display ap:");
    scanf("%d",&n);
    int a=4;
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        a=a+3;
    }
    return 0; 
}
