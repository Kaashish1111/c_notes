#include<stdio.h>
int main()
{
    // aim for ap-4,7,10,13,18.......
    int n;
    printf("Enter the term till which u want to display");
    scanf("%d",&n);
    for( int i=4;i<=4+(n-1)*3;i=i+3)
    {
        printf("%d  ",i);
    }
    return 0;
}
