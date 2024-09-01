// wap to check if the array is palindrome or not

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
    // Check if array is palindrome or not
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != brr[i])
        {
            printf("Array is not palindrome");
        }
    }
    printf("Array is palindrome");
    return 0;
}