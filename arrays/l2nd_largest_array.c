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
    printf("The second largest element is %d",a[size-2]);
    return 0;
}