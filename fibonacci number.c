#include<stdio.h>
int main()
{
    int n,a=1,b=1,i,sum=0;
    printf("Enter a no:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=b;
        b=sum;
        sum=(a+b);
    }
    printf("Fibonacci No is %d",sum);
    return 0;
}