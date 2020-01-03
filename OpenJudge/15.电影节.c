#include<stdio.h>
int main()
{
	int i,n,a[103],b[103],t,j,count=1;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)
		break;
		for(i=0;i<n;i++)
		{
			scanf("%d%d",&a[i],&b[i]);
		}
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(b[j]>b[j+1])
				{
					t=b[j+1];
					b[j+1]=b[j];
					b[j]=t;
					t=a[j+1];
					a[j+1]=a[j];
					a[j]=t;
				}
			}
		}
		t=b[0];count=1;
		for(j=0;j<n;j++)
		{
		for(i=0;i<n;i++)
		{
			if(a[i]>=t)
			{
				t=b[i];
				count++;
				break;
			}
		}
		}
		printf("%d\n",count);
		/*for(i=0;i<n;i++) 
		{
			printf("%d %d\n",a[i],b[i]);
		}*/ 
	}
	return 0;
}
