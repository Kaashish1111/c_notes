#include<stdio.h>
int main()
{
    int l,b,p,a;
    printf("Enter length");
    scanf("%d",&l);
    printf("Enter breadth");
    scanf("%d",&b);
    a=l*b;
    p=2*(l*b);
    if(a>p)
    {
        printf("Area is greater than perimeter");
    }
    if(p>a)
    {
        printf("Perimeter is grater than area");
    }
    if(p==a)
    {
        printf("Perimeter is equal to area");
    }
    return 0;
}
