#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,*ptr;
    printf("Enter total no of values that you want to enter: ");
    scanf("%d",&n);
    ptr=(int *)calloc(n,sizeof(int));
    printf("Enter values: \n");
    for(int i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }
    printf("The values you entered is: \n");
    for(int i=0;i<n;i++){
        printf("%d\t",*(ptr+i));
    }
    return 0;
}