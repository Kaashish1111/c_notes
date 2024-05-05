#include<stdio.h>
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int r;
    printf("Enter value of r: ");
    scanf("%d",&r);
    int ncr=factorial(num)/(factorial(r)*factorial(num-r));
    printf("%d ",ncr);
    return 0;
}