#include<stdio.h>
int main(){
    int even=0,odd=0;
    int a[50],size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    printf("Enter array of elemnts: ");
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<size;i++){
        if(a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Even numbers:%d",even);
    printf("\n Odd number:%d",odd);
    return 0;
}