#include<stdio.h>
int main()
{
    int n,ld,rn,sum=0;
    printf("Enter the No:");
    scanf("%d",&n);
    sum=n;
    while(n!=0)
    {
        rn=rn*10;
        ld=n%10;
        rn=rn+ld;
        n=n/10;
        
    }
    sum=(rn+sum);
    printf("sum pf given no and their reverse are %d",sum);
    return 0;


}