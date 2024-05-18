#include<stdio.h>
#include<string.h>
int main(){
    char s1[50];
    printf("Enter a string: ");
    scanf("%s",s1);
    char s2[50];
    printf("Enter another string: ");
    scanf("%s",s2);

    int leg=0;
    for(int i=0;s1[i]!='\0'||s2[i]!='\0';i++){
        if(s1[i]!=s2[i]){
            leg=1;
            break;
        }
    }
    if(leg==1){
        printf("Not same");
    }
    else{
        printf("Same");
    }
    return 0;
}