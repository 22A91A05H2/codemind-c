#include<stdio.h>
int main()
{
    int n,i,a[100],c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    c=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            if(i%2!=0)
            {
                c=1;
                break;
            }
        }
       
    }
    if(c==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}