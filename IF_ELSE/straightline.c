#include<stdio.h>
int main()
{
    float x1,x2,x3,y1,y2,y3,m1,m2;
    printf("Enter the value of x1");
    scanf("%f",&x1);
    printf("Enter the value of y1");
    scanf("%f",&y1);
    printf("Enter the value of x2");
    scanf("%f",&x2);
    printf("Enter the value of y2");
    scanf("%f",&y2);
    printf("Enter the value of x3");
    scanf("%f",&x3);
    printf("Enter the value of y3");
    scanf("%f",&y3);
    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);
    if(m1=m2)
        printf("The point falls on the straight line");
    else
        printf("The point does'nt fall on the straight line");
    return 0;

}
