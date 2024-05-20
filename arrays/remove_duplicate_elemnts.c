#include <stdio.h>

void removeDuplicates(int arr[], int n)
{
    if (n == 0 || n == 1)
        return;

    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    printf("Array after removing duplicates: \n");
    for (int k = 0; k <= i; k++)
        printf("%d ", arr[k]);
    printf("\n");
}

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    removeDuplicates(arr, n);
    return 0;
}