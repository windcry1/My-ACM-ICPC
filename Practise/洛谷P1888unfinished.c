#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        if(b>c)
        {
            printf("%d/%d",b,a);
        }
        else
        {
            printf("%d/%d",c,a);
        }
    }
    if(b>a && b>c)
    {
        if(a>c)
        {
            printf("%d/%d",c,b);
        }
        else
        {
            printf("%d/%d",a,b);
        }
    }
    if(c>a && c>b)
    {
        if(a>b)
        {
            printf("%d/%d",b,c);
        }
        else
        {
            printf("%d/%d",a,c);
        }
    }
    return 0;
}
