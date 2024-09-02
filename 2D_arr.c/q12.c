// spiral matrix to array

#include <stdio.h>

#define ROW_SIZE 3
#define COL_SIZE 3

int main()
{
    int arr[ROW_SIZE][COL_SIZE] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 0;
    int max_col = COL_SIZE - 1, min_col = 0, max_row = ROW_SIZE - 1, min_row = 0;
    int total_elements = ROW_SIZE * COL_SIZE;
    int count = 0;

    while (count < total_elements)
    {
        for (int i = min_col; i <= max_col; i++)
        {
            printf("%d ", arr[min_row][i]);
            count++;
        }
        if(count>=total_elements) break;
        min_row++; // increment min_row

        for (int i = min_row; i <= max_row; i++)
        {
            printf("%d ", arr[i][max_col]);
            count++;
        }
        max_col--; // decrement max_col
        if(count>=total_elements) break;

        for (int i = max_col; i >= min_col; i--)
        {
            printf("%d ", arr[max_row][i]);
            count++;
        }
        if(count>=total_elements) break;
        max_row--; // decrement max_row

        for (int i = max_row; i >= min_row; i--)
        {
            printf("%d ", arr[i][min_col]);
            count++;
        }
        if(count>=total_elements) break;
        min_col++; // increment min_col
    }

    return 0;
}