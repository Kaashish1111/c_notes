#include<stdio.h>
int * return_pointer(int a[]){
    a=a+2;
    return a;
}
int main(){
    int *p;
    int arr[]={1,2,3,4,5};
    p=return_pointer(arr);
    printf("%d",*p);
    return 0;
}