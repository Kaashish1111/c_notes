//  find maxium and minimum in 2d array

#include <stdio.h>
int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6},{7,8,9}};
    int max = a[0][0], min = a[0][0];
    int rows = sizeof(a) / sizeof(a[0]);
    int cols = sizeof(a[0]) / sizeof(a[0][0]);

    // Iterate through each element in the 2D array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            // Update maximum value if current element is greater
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
            // Update minimum value if current element is smaller
            if (a[i][j] < min)
            {
                min = a[i][j];
            }
        }
    }
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);
    return 0;
}