// missing number
#include<stdio.h>
int main(){
    int nums[] = {9,6,4,2,3,5,7,0,1};
    int n = sizeof(nums) / sizeof(nums[0]);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    int missing = (n * (n + 1)) / 2 - sum;
    printf("%d", missing);
    return 0;
}
