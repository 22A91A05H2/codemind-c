#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,n,x,y,z,s=0,dm;
    scanf("%d%d",&a,&b);
    n=log10(a)+1;
    x=a/pow(10,n-b);
    dm=a;
    //float y=a%pow(10,b);
    int i1=0,i;
    for(i=1;i<=b;i++)
    {
        int r;
       r=dm%10;
       r=r*pow(10,i1);
       s=s+r;
       i1++;
       dm=dm/10;
    }
    
    z=abs(x-s);
    //while()
    printf("%d",z);
}