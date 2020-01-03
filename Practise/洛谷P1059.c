#include<stdio.h>
int main()
{
    int n,a[1001],i,temp;
    scanf("%d",&n);
    for(i=0;i<=1000;i++)
    {
        a[i]=0;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&temp);
        a[temp]=1;
    }
    temp=0;
    for(i=1;i<=1000;i++)
        if(a[i])
            temp++;
    printf("%d\n",temp);
    for(i=1;i<=1000;i++)
        if(a[i])
            printf("%d ",i);
    return 0;
}
