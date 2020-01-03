#include<stdio.h>
int main()
{
	long long m,n,a[101],t;
	int i,j;
	while(scanf("%lld%lld",&n,&m)!=EOF)
	{
		int num=0;
		if(n==0||m==0)
		break;
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-1-i;j++)
			{
				if(a[j]>a[j+1])
				{
					t=a[j];
					a[j]=a[j+1];
					a[j+1]=t;
				}
			}
		}
		for(i=0;i<n;i++)
		{	
			if(m<=0)
			break;
			m-=a[i];
			num++;
		}
		printf("%d\n",num-1);
	}
	return 0;
}
