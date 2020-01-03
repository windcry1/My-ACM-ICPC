#include<stdio.h>
int main()
{
    int n,a[103],i,j,x;
    scanf("%d",&x);
    while(x--)
    {
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n;i++)
    {
        a[i]=(n-i)*a[i];
    }
    for(i=n;i>=0;i--)
    {
        if(a[i]!=0)
            break;
    }
    if(i==-1)
        printf("0");
    for(j=0;j<=i;j++)
    {
    	printf("%d ",a[j]);
    }
    printf("\n");
    }
    return 0;
}
