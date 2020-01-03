#include<stdio.h>
int n,m,L,l,r,mid;
int a[60000];
int cow(int mid)
{
    int sten=0,g=0,i;
    for (i=1;i<=n;i++)
    {
        if (a[i]-a[g]<=mid)
        {
            sten++;
        }
        else g=i;
    }
    return sten;
}
int main()
{
    int i,x;
    scanf("%d%d%d",&L,&n,&m);
    for (i=1;i<=n;i++)
        scanf("%d",&a[i]);
    n++;
    a[n]=L;
    l=0;r=L;
    while (l<=r)
    {
        mid=(l+r)/2;
        x=cow(mid);
        if (x>m) 
			r=mid-1;
        else 
			l=mid+1;
    }
    printf("%d\n",l);
}
