#include<stdio.h>
int main()
{
    int n,ld,rn=0;
    printf("Enter the Number:");
    scanf("%d",&n);
    while(n!=0)
    {
        rn=rn*10;
        ld=n%10;
        rn=rn+ld;
        n=n/10;
        



    }
    printf("Reversed Number is %d",rn);

}