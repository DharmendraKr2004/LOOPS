#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Enter base:");
    scanf("%d",&a);
    printf("Enter Power:");
    scanf("%d",&b);
    int c=1;
    for(i=1;i<=b;i++)
    {
        c=c*a;
    }
    printf("%d raised to the power %d is %d",a,b,c);
    return 0;
}