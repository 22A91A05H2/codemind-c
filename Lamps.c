#include<stdio.h>
int main()
{
    int n,k,x,y,i,j;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    i=n-k;
    if(x<y)
    {
    j=(k*x)+(i*x);
    printf("%d",j);
    }
    else
    {
        j=(k*x)+(i*y);
    printf("%d",j);
    }
}