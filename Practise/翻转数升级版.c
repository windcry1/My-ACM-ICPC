#include<stdio.h>
int main()
{
	int N,M,t,i,j;
	while(scanf("%d%d%d",&N,&M,&t)!=EOF)
	{
		int a[10001]={0},b[10001]={0},c[10001]={0},d[10001]={0},n=0,m=0;
		for(i=0;i<t;i++)
		{
			scanf("%d%d",&a[i],&b[i]);
			c[a[i]]=1-c[a[i]];
			d[b[i]]=1-d[b[i]];
		}
		for(i=0;i<10000;i++)
		{
			n+=c[i];
		}
		for(i=0;i<10000;i++)
		{
			m+=d[i];
		}
		printf("%d\n",N*M-(N*m+M*n-2*m*n));
	} 
	 return 0;
} 
