#include<stdio.h>
int main()
{
    int n,i,n2,sum=0;
    scanf("%d",&n);
    int temp=n;
    while(n>0)
    {
        int n1=n%10;
        int fact=1;
        for(i=1;i<=n1;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(sum==temp)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}