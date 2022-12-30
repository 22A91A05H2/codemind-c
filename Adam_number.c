#include<stdio.h>
int main()
{
    int n,rev=0,c,e,m,rem=0,a,d,r;
    scanf("%d",&n);
    c=n*n;
    while(n!=0)
    {
        a=n%10;
        rem=rem*10+a;
        n=n/10;
    }
    d=rem*rem;
    while(d!=0)
    {
        r=d%10;
        rev=rev*10+r;
        d=d/10;
    }
    if(c==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}