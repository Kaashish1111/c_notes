#include <stdio.h>
int main()
{
    int a[10], i, n = 10;
    printf("Enter the elements of array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Elements of array are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    int max1 = a[0], max2 = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > max1)
        {
            max1 = a[i];
        }
        else if (a[i] > max2 && a[i] != max1)
        {
            max2 = a[i];
        }
    }
    printf("Maximum element is: %d\n", max1);
    printf("Second maximum element is: %d\n", max2);
    return 0;
}