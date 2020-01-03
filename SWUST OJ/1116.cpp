#include <stdio.h>
int main()
{
    int a[1001],i,n;
    while(scanf("%d",&n)!=EOF)
    {
        n++;
        int b=0,j;
        for(i=1;i<n;i++)
            scanf("%d",&a[i]);
        scanf("%d",&a[0]);
        for(i=0;i<n-1;i++)
        {
            b++;
            if(a[i]>a[i+1])
            {
                int t;
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
            else
                break;
        }
        j=10-b+1;
        if(b==10)
            j=0;
        printf("%d %d \n%d",j,b,a[0]);
        for(i=1;i<n;i++)
            printf(" %d",a[i]);
        printf("\n");
    }
    return 0;
}
