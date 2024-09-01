//  rotate the elemnts by k steps

#include <stdio.h>
int main()
{
    int a[7] = {1, 2, 3, 4, 5, 6, 7};
    int k;
    printf("Enter the number of steps to rotate: ");
    scanf("%d", &k);
    int temp = a[0];
    k = k % 7;
    for (int i = 0; i < 7; i++)
    {
        int temp = a[i];
        a[i] = a[6 - i];
        a[6 - i] = temp;
    }
    for (int i = 0; i < k / 2; i++)
    {
        int temp = a[i];
        a[i] = a[k - 1 - i];
        a[k - 1 - i] = temp;
    }
    for (int i = k; i < (7 + k) / 2; i++)
    {
        int temp = a[i];
        a[i] = a[6 - i + k];
        a[6 - i + k] = temp;
    }

    // Print the rotated array
    printf("Rotated array: ");
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}