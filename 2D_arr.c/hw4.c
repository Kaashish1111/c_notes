//  code for maxsum rowise

#include <stdio.h>

int main() {
    int arr[][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);

    int maxSum = 0;
    int maxRowIndex = 0;

    // Iterate over each row
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;

        // Calculate the sum of the current row
        for (int j = 0; j < cols; j++) {
            rowSum += arr[i][j];
        }

        // Update the maximum sum and row index if needed
        if (rowSum > maxSum) {
            maxSum = rowSum;
            maxRowIndex = i;
        }
    }

    printf("Row with maximum sum: Row %d\n", maxRowIndex + 1);
    printf("Maximum sum: %d\n", maxSum);

    return 0;
}