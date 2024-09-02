#include <stdio.h>

int main()
{
    int row, col; // variables to store the number of rows and columns

    // Read the dimensions of the matrix from the user
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);

    int matrix[row][col]; // declare a 2D array to store the matrix

    // Read the matrix elements from the user
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }
    printf("Matrix after tranpose is : ");
    printf("\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}