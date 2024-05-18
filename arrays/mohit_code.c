#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n Printing array:");
    for(int i=n-1;i>=0;i--){
        printf("%d\t",arr[i]);
    }
    return 0;
}