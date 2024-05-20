#include <stdio.h>
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 7; i++)
    {
        for (int j = i + 1; j < 7; j++)
        {
            if (a[i] == a[j])
            {
                printf("Duplicate found at %d and %d\n", i+1, j+1);
                break;
            }
        }
    }
    return 0;
}