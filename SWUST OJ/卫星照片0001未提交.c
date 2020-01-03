#include<stdio.h>
int main()
{
	char ch[81][1001];
	int i,j,W,H;
	scanf("%d%d",&W,&H);
	for(i=0;i<H;i++)
	{
		for(j=0;j<W;j++)
		{
			scanf("%c",&ch[i][j]);
		}
	}
	for(i=0;i<H;i++)
	{
		for(j=0;j<W;j++)
		{
			printf("%c",ch[i][j]);
		}
	}
	return 0;
} 
