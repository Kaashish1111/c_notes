#include <stdio.h>
int main()
{
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{5, 6}, {7, 8}};
    for (int i = 1; i < 2; i++)
    {
        for (int j = 1; j < 2; j++)
        {
            a[i][j] = a[i][j] + b[i][j];
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}