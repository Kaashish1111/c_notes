nt main(void)
{
    int n,ld,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n!=0)
    {
        if(n%2==0)
        {
            ld=n%10;
            sum=sum+ld;
            n=n/10;
        }
    }
    printf("Sum of even digits of given number is %d",sum);
    return 0;
}