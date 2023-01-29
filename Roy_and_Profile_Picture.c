#include<stdio.h>
int main()
{
    int t,l;
    scanf("%d%d",&l,&t);
    while(t--)
    {
        int  w,h;
        scanf("%d%d",&w,&h);
        if(w<l or h<l)
        {
            printf("UPLOAD ANOTHER
");
        }
        else if(w==l and h==l or (w==h))
        {
            printf("ACCEPTED
");
        }
        else
        {
            printf("CROP IT
");
        }
    }
}