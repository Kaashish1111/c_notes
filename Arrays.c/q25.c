#include<stdio.h>
#include<stdbool.h>
int main()
{
    int arr[9] = {1, 1, 2, 2, 6, 5, 8, 8, 5};
    int i, j;
    bool check;

    for (i = 0; i < 9; i++)
    {
        check = false;
        for (j = 0; j < 9; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                check = true;
            }
        }
        if (!check)
        {
            printf("%d ", arr[i]);
            break;
        }
    }

    if (i == 9)
    {
        printf("No non-duplicate element found.");
    }

    return 0;
}