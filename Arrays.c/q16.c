#include <stdio.h>
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int toatlPairs = 0;
    int x = 12;
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                toatlPairs++;
            }
        }
    }
    printf("%d", toatlPairs);
    return 0;
}