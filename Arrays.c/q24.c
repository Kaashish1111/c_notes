//  find no of duplicates

#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 2, 3, 3, 4, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, k = 0;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                k++;
                break;
            }
        }
    }
    printf("%d", k);
    return 0;
}