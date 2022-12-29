#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,k1=1,k3=1,a,b;
    scanf("%d",&n);
    for(i=1;i<=n+1;i++)
    {
        if(i%2==1)
        {
            a=pow(2,k1);
            printf("%d ",a-1);
            k1++;
        }
        else
        {
            b=pow(3,k3);
            k3++;
            printf("%d ",b-1);
        }
    }
}