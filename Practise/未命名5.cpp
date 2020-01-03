#include <stdio.h>


int main()
{
    int w,n,i,j,d;
    int a[100]={0};
    int c[100]={0};
    int b[100]={0};
    scanf("%d %d",&w,&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
    	c[0]=10;
		c[1]=10;
        for(j=2,d=0;j<a[i];j++)
        {
            c[j]=c[j-1]+c[j-2];
            d=j;
        }
       b[i]=c[d];
	}
   for(i=0;i<n;i++)
   {
       printf("%d\n",b[i]+w);
   }
    return 0;
}

