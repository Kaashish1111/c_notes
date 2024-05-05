#include <stdio.h>

int main()
{
    int n;
    printf("Enter no of lines: ");
    scanf("%d", &n);
    // Update your code below this line to solve the problem
    int nst = n;
    int nsp = 1;
    for (int i = 1; i <= 2 * n + 1; i++)
    {
        printf("*");
    }
    printf("\n");
    for (int l = 1; l <= n; l++)
    {
        for (int j = 1; j <= nst; j++)
        {
            printf("*");
        }
        for (int k = 1; k <= nsp; k++)
        {
            printf(" ");
        }
        for (int m = 1; m <= nst; m++)
        {
            printf("*");
        }
        nst--;
        nsp += 2;
        printf("\n");
    }
    return 0;
}