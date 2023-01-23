#include<stdio.h>
int main()
{
    int  x,y,t,i,c,b;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&x,&y);
    c=x*2;
    b=y*5;
    if(c>b)
    {
        printf("Chocolate
");
    }
    else if(c==b)
    {
        printf("Either
");
    }
    else
    {
        printf("Candy
");
    }
}
}