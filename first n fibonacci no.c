#include<stdio.h>
int main()
{
    int i,n,a,b,sum;
    printf("Enter a No:");
    scanf("%d",&n);
    a=1;
    b=1;
    sum=0;
    for(i=1;i<=n;i++)
    {
        a=b;
        b=sum;
        sum=(a+b);
        printf("Fibonacci No of %d are %d\n",i,sum);
    }
    return 0;
}