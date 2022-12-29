#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,k1=-2,k2=0,b,x;
    scanf("%d",&n);
    for(i=1;i<n+2;i++)
    {
        if(i%2==0)
        {
            x=5*k1+12;
            printf("%d ",k1);
            k1=x;
        }
        else
        {
            b=pow(3,k2);
            printf("%d ",b+2);
            k2++;
        }
    }
}