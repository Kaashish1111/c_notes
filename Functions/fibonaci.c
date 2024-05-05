#include<stdio.h>
void fibonaci(int n){
    int first=0,second=1;
    int next;
    for(int i=1;i<=n;i++){
        printf("%d ",first);
        next=first+second;
        first=second;
        second=next;
    }
    return;
}
int main(){
    int terms;
    printf("Enter no of terms: ");
    scanf("%d",&terms);
    fibonaci(terms);
    return 0;
}