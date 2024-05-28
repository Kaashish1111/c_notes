#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp=NULL;
    fp=fopen("example.txt","r+");
    if(fp==NULL){
        printf("File not found");
        exit(1);
    }
    fputs("kashish",fp);
    fclose(fp);
    return 0;
}
