#include<stdio.h>
#include<string.h> 
int main()
{
	int n,b[1000],m,d[1000],e[1000],i,j,t1,t2;
	while(scanf("%d",&n)!=EOF)
	{
		memset(b,0,sizeof(b));
		memset(d,0,sizeof(d));
		memset(e,0,sizeof(e));
		for(i=0;i<n;i++)
		{
			scanf("%d%d",&t1,&t2);
			for(j=t1;j<=t2;j++)
			{
				b[j]++;
			}
		}
		scanf("%d",&m);
		for(i=0;i<m;i++)
		{
			scanf("%d%d",&d[i],&e[i]);
		}
		for(i=0;i<m;i++)
		{
			for(j=d[i];j<=e[i];j++)
			{
				printf("%d\n",b[j]);
			}
		}
	}
	return 0;
}
