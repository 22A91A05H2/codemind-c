#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    int a[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(n<=a[i])
        {
            c=1;
            break;
        }
    }
    if(c==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}