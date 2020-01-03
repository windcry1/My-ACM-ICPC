#include<stdio.h>
int main()
{
	int M,N,t,i,k,j,a,b,sum=0;
	while(scanf("%d %d %d",&N,&M,&t)!=EOF)
	{
	int mat[N][M];
	for(i=0;i<N;i++)
	{
		mat[i][M-1]=0;
	}
	for(i=0;i<M;i++)
	{
		mat[N-1][i]=0;
	}
	for(k=0;k<t;k++)
	{
		scanf("%d %d",&a,&b);
		for(i=0;i<N;i++)
		mat[i][a]=1-mat[i][a];
		for(i=0;i<M;i++)
		mat[b][i]=1-mat[b][i];
		mat[a][b]=0;
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			if(mat[i][j]==0)
			sum++;
		}
	}
	printf("%d\n",sum);
	sum=0;
	}
	return 0; 
} 
