#include<stdio.h>
int main()
{
    int n,s,fc=1,t;
    scanf("%d",&n);
    t=n;
    s=n*n;
    while(n>0)
    {
        n/=10;
        fc*=10;
    }
    if(t==s%fc)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}