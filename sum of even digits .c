#include<stdio.h>
int main()
{
    int n,lastdigit,sum=0;
    printf("Enter the no:");
    scanf("%d",&n);
    while(n!=0)
    {
        lastdigit=n%10;
         if(lastdigit%2==0)

         {
            

            sum=sum+lastdigit;
        
         }
         n=n/10;
        

    }
    printf("Sum of even digits are %d",sum);
    
    return 0;
}