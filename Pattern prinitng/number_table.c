#include <stdio.h>
int main()
{
    int n;
    printf("Enter no of lines: ");
    scanf("%d", &n);
    int nst = n;
    int nsp = 1;
    //      for n=4
    //      1 2 3 4 5 4 3 2 1
    //      1 2 3 4   4 3 2 1
    //      1 2 3       3 2 1
    //      1 2           2 1
    //      1               1
    for (int i = 1; i <= 2 * n + 1; i++)
    {
        if (i <= n + 1)
        {
            printf("%d ", i);
        }
        else {
            printf("%d ", 2*(n+1)-i );
        }
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= nst; j++)
        {
            printf("%d ", a);
            a++;
        }
        for (int k = 1; k <= nsp; k++)
        {
            printf("  ");
        }
        a--;
        for (int m = 1; m <= nst; m++)
        {
            printf("%d ", a);
            a--;
        }
        nst--;
        nsp += 2;
        printf("\n");
    }
    return 0;
}