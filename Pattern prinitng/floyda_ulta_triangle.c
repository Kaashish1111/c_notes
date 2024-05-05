#include<stdio.h>
int main(){
    int n;
    printf("Enter no of lines: ");
    scanf("%d",&n);
    // 1
    // 3  2
    // 4  5  6
    // 10 9  8  7
    int d=1;
    int a=1;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            a=(i*(i+1))/2; 
            for(int j=1;j<=i;j++) {      
                printf("%d ",a--);    
                d++; 
            }
        }
        else{
            for(int k=1;k<=i;k++){
                printf("%d ",d);
                d++;
            }
        }
        printf("\n");
    }
    return 0;
}