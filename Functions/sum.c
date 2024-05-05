#include<stdio.h>
int sum(int x,int y){
    return x+y;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int ans=sum(a,b);
    printf("%d\n",ans);
    return 0;
}