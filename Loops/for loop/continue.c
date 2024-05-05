#include<stdio.h>
int main()
{   // aim is to print odd no's b/w 1 to 100
    for(int i=1;i<=100;i++)
    {
        if(i%2==0){ 
            continue;}  // it will skip all even no's from 1 to 100
        printf("%d  ",i);
    }
    return 0;
}