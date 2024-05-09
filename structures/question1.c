#include<stdio.h>
struct question
{
    /* data */
    int a;
    float b;
    char c;
};
int main(){
    struct question q={.b=1,.c=10,.a=15};
    printf("%d %f %d",q.a,q.b,q.c);
    return 0;
}