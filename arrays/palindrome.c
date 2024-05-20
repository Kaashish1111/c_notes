#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of array: \n");
    scanf("%d",&size);
    int a[size];
    int count=0;
    printf("Enter the elemnts of an array: \n");
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    int b[size];
    for(int i=0;i<size;i++){
        b[i]=a[(size-1)-i];
    }
    for(int i=0;i<size;i++){
        if(a[i]==b[i]){
            count++;
        }
    }
    if(count==size){
        printf("yes the array is palindrome");
    }
    else{
        printf("no the array is not palindrome");
    }
}