#include<stdio.h>
int main()
{
    int ci,si;
    printf("Enter the selling price");
    scanf("%d",&si);
    printf("Enter the cost price");
    scanf("%d",&ci);
    if(si>ci)
    {
        printf("Profit");
    }
    if(ci>si)
    {
        printf("Loss");
    }
  if(ci==si)
    {
        printf("Neither profit neither loss");
    }
    return 0;
}
