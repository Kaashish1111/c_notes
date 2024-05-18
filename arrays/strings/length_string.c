#include<stdio.h>
#include<string.h>
int main(){
    char name[100];
    printf("Enter a string: ");
    scanf("%s",&name);
    printf("%s",name);
    printf("\n%d",strlen(name));
    return 0;
}