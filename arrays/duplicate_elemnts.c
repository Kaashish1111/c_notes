#include<stdio.h>
int main(){
    int a[50];
    printf("Enter the size of array: ");
    int size;
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    int temp;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<size;i++){
        printf("%d\t",a[i]);
    }
    printf("The array after removal of duplicates is: ");
    // Removing duplicates
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size;) {
            if (a[j] == a[i]) {
                // If duplicate found, shift elements to left
                for (int k = j; k < size - 1; k++) {
                    a[k] = a[k + 1];
                }
                size--; // Reduce size of array
            } else {
                j++; // Move to next element
            }
        }
    }

    printf("Array after removing duplicates:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}