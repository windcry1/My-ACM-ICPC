#include<stdio.h>
int main()
{
    int n,a[10001],i,N[10001],max=1,j,s=0;
    scanf("%d",&n);
    for(i=0;i<=10000;i++)
    {
        a[i]=0;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&N[i]);
        a[N[i]]=1;
    }
    for(i=0;i<=10000;i++)
    {
        if(a[i+1]-a[i]==1)
        {
        for(j=i;j<=9998;j++)
        {
            s++;
            if(a[j+1]-a[j+2]==1)
            {
                break;
            }
        }
        }
        if(s>=max)
        {
        max=s;
        }
        s=0;
    }
    printf("%d\n",max);
    return 0;
}
