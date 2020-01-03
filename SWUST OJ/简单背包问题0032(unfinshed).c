#include <stdio.h>
int main()
{
	int w,n,s,i,sum=0;
	scanf("%d %d",&s,&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&w);
		sum+=w;
	}
	if(s>=sum)
	{
		printf("YES");
	}
	if(s<sum)
	{
		printf("NO");
	}
}

