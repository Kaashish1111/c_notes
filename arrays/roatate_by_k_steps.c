#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of array: \n");
    scanf("%d",&size);
    int a[size];
    printf("Enter the elemnts of array: \n");
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    int k;
    printf("Enter from where you want to rotate the array: \n");
    scanf("%d",&k);
    for(int i=1,j=k;i<=j;i++,j--){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    printf("Array after roatation is: \n");
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    return 0;
}