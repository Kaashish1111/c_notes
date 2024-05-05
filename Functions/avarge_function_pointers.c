#include<stdio.h>
int average(int marks[],int num){
    int sum=0;int avg;
    for(int i=0;i<num;i++){
        sum=sum+marks[i];
    }
    avg=sum/num;
    return avg;
}
int main(){
    int n;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter students marks: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ans=average(arr,n);
    printf("Average is %d",ans);
    return 0;
}