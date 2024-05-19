#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, *ptr;
    printf("Enter total no of values that you want to enter: ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    printf("Enter values: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }
    printf("Enter the updated value: \n");
    scanf("%d",&n);
    int *ptr1=(int *)realloc(ptr,n*sizeof(int));
    printf("The previous addres is:%d, new2 addres:%d",ptr,ptr1);
    printf("The values you entered is: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", *(ptr1 + i));
    }
    return 0;
}