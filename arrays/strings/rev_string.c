#include<stdio.h>
#include<string.h>
int main(){
    char name[50];
    scanf("%s",name);
    int l=strlen(name);
    char s[50];
    for(int i=0;i<l/2;i++){
        s[i]=name[i];
        name[i]=name[l-1-i];
        name[l-1-i]=s[i];
    }
    printf("The reverse of string is %s",name);
    return 0;
}