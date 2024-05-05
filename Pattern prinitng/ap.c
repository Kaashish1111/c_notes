#include <stdio.h>

int main() {
    int n;
    printf("Enter no of lines: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    for (int i = n - 1; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}

