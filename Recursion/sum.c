#include <stdio.h>
int sum(int x)
{
    int s = 0;
    if (x == 1)
    {
        return x;
    }
    s = x + sum(x - 1);
    return s;
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("The sum of first %d natural numbers is %d", n, sum(n));
    return 0;
}