#include<stdio.h>
int main()
{
    int n,a[1001],i,sum1=0,sum2=0;
    scanf("%d",&n);
        for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
            sum1++;
        if(a[i]==1)
            sum2++;
    }
    printf("%d %d",sum1,sum2);
        return 0;
}
