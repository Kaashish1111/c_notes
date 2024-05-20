#include<stdio.h>
void removeDuplicates(int arr[], int n)
{
    if (n == 0 || n == 1)
        return;

    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    printf("union of two arrys:  \n");
    for (int k = 0; k <= i; k++)
        printf("%d ", arr[k]);
    printf("\n");
}


int main(){
    int a[50],a2[50];
    int size_1,size_2;
    printf("Enter the no of elements you want in an array: ");
    scanf("%d",&size_1);
    printf("Enter the elements of array: ");
    for(int i=0;i<size_1;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the no of elements you want in another array: ");
    scanf("%d",&size_2);
    printf("Now enter the elemnts of another array: ");
    for(int j=0;j<size_2;j++){
        scanf("%d",&a2[j]);
    }
    printf("Now printing the merged array: ");
    int merged_array[size_1+size_2];
    for(int m=0;m<size_1;m++){
        merged_array[m]=a[m];
    }
    for(int n=0;n<size_2;n++){
        merged_array[size_1+n]=a2[n];
    }
    // Actually printing the merged array
    for(int k=0;k<size_1+size_2;k++){
        printf("%d\t",merged_array[k]);
    }

    

    return 0;
}