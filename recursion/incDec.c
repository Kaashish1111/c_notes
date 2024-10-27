#include<stdio.h>

void InDe(int n){
    if(n==0){
        return;
    }
    printf("%d\n", n);
    InDe(n-1);
    printf("%d\n", n);
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    InDe(num);
    return 0;
}