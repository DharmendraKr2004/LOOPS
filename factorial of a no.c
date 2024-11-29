#include<stdio.h>
/*Eg: 5!=5*4*3*2*1 or 1*2*3*4*5*/
int main()
{
    int n,i,product=1;
    printf("Enter the No:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        product=product*i;
        printf("Factorial of %d is %d\n",i,product);
    }
    
    return 0;
}