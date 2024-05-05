#include<stdio.h>
void factorial_upto_n(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial=factorial*i;
        printf("%d ",factorial);
    }
    return;
}
int main(){
    int terms;
    printf("Enter no of terms: ");
    scanf("%d",&terms);
    factorial_upto_n(terms);
    return 0;
}