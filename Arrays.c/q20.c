//  copy reverse of an array into another array

#include <stdio.h>
int main()
{
    int arr[10], brr[10], n = 10;
    printf("Enter %d elements of array: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Copy reverse of array into another array
    for (int i = 0; i < n; i++)
    {
        brr[i] = arr[n - i - 1];
    }

    // Print original array
    printf("Original array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Print reversed array
    printf("Reversed array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", brr[i]);
    }
    printf("\n");

    return 0;
}