
#include<stdio.h>
int main()
{
    int n,max=0,r;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        if(max<r)
        {
            max=r;
        }
        n/=10;
    }
    printf("%d",max);
}
