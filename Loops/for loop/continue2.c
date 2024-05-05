#include<stdio.h>
int main()
{     // aim is to print even no 1 to 100
    for(int i=1;i<=100;i++)
    {
        if(i%2!=0)//odd
        {    
            continue;  // we are skipping odd numbers
        }
        printf("%d ",i);   // after skipping odd numbers all even
    }
    return 0;
}