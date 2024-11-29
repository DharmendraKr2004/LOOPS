#include<stdio.h>
int main()
{
    int n,p;
    printf("Enter the No:");
    scanf("%d",&n);
    int sum=0;
    while(n!=0)
    {
        p=n%10;
        sum=sum+p;
        n=n/10;

        
    };
    printf("Sum of digits are: %d",sum);
    return 0;
}