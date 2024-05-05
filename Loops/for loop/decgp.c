#include<stdio.h>
int main()
{
    //100,50,25......(G.P)
    int n;
    printf("Enter the nth term: ");
    scanf("%d",&n);
    float a=100.0;
    for( int i=1;i<=n;i++)
    {
        printf("%f  ",a);
        a=a*(1.0/2);
    }
    return 0;
}