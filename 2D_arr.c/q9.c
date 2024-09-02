#include <stdio.h>

int main()
{
    int n; // variables to store the number of rows and columns

    // Read the dimensions of the matrix from the user
    printf("Enter the number of rows/columns: ");
    scanf("%d", &n);

    int matrix[n][n]; // declare a 2D array to store the matrix

    // Read the matrix elements from the user
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\n");
    printf("Original matrix is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Transpose
    int temp[n][n]; // note the swapped dimensions
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp[j][i] = matrix[i][j]; // swap row and column indices
        }
    }

    printf("\n");
    printf("Transposed matrix is:\n");
    // print transposed matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", temp[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    // roatate
    for(int i=0;i<n;i++){
        int j=0,k=n-1;
        while(j<k){
            int extra = temp[i][j];
            temp[i][j] = temp[i][k];
            temp[i][k] = extra;
            j++;
            k--;
        }
    }
    printf("\n");
    printf("Rotated matrix is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", temp[i][j]);
        }
        printf("\n");
    }


    return 0;
}