#include <stdio.h>
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int total_pairs = 0;
    int x;
    printf("Enter a number: \n");
    scanf("%d", &x);
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            if (a[i] + a[j] == x)
            {
                total_pairs++;
                printf("The pair (%d,%d)\n", a[i], a[j]);
            }
        }
    }
    printf("\n");
    printf("The total no of pairs are %d", total_pairs);
    return 0;
}