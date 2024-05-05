#include<stdio.h>
int main()
{
    int ram,shyam,ajay;
    printf("Enter ages of ram,shyam,ajay");
    scanf("%d%d%d",&ram,&shyam,&ajay);
    if(ram>shyam)
    {
        if(ram>ajay)
            printf("Ram is eldest");
        else
            printf("ajay is eldest");
    }
        else
        {
            if(shyam>ajay)
            printf("shyam is eldest");
            else
                printf("ajay is eldest");
        }
        return 0;
}
