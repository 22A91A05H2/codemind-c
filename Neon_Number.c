#include<stdio.h>
int main()
{
    int n,r,s,sum=0;
    scanf("%d",&n);
    s=n*n;
    while(s!=0)
    {
        r=s%10;
        sum+=r;
        s/=10;
    }
    if(n==sum)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}