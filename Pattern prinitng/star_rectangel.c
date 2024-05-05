// #include<stdio.h>
// int main(){
//      for(int i=1;i<=3;i++){
//         printf("* * * * *");
//         printf("\n");
//      }
//     return 0;
// }
#include<stdio.h>
int main(){
     int n;
     printf("Enter the no of lines:");
     scanf("%d",&n);
     int m;
     printf("Enter the no of stars you want in each line:");
     scanf("%d",&m);
     for(int i=1;i<=n;i++){ //rows 
        for(int j=1;j<=m;j++){ //columns 
            printf("*");
        }
        printf("\n");
     }
    return 0;
}