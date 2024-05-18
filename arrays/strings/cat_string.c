#include<stdio.h>
#include<string.h>
int main(){
    char name[10]="Kahsish ";
    char last_name[10]="Goyal";
    int l1=strlen(name);
    int l2=strlen(last_name);
    for(int i=0;i<l1;i++){
        printf("%c",name[i]);
    }
    for(int i=0;i<l2;i++){
        printf("%c",last_name[i]);
    }
    return 0;
}