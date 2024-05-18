// length of string iwthour using streln
#include<stdio.h>
int main(){
    char  name[100];
    int count=0;
    printf("Enter a string :");
    scanf("%s",&name);
    int i;
    while(name[i]!='\0'){
        count++;
        i++;
    }
    printf("%d",count);
    return 0;
}