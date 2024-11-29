#include<stdio.h>
int main()
{
    int i,sum,rem,num,nno;
    for(i=1;i<=500;i++)
    {
        sum=0;
        num=i;
        nno=num;
        while(num>0)
        {
            rem=num%10;
            num=num/10;
            sum=sum+rem*rem*rem;
        }
        if(sum==nno)
        {
            printf("%d\n",nno);
        }
        

    }
    return 0;
}