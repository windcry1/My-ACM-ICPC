#include<stdio.h>
#include<string.h>
int r[3][3],a[3][3],b[3][3];
int result(int c,int d)
{
	int t=0;
	for(int i=0;i<3;i++)
		t+=a[c][i]*b[i][d];
	return t;
}
int main()
{
	int k,i,j;
	memset(r,0,sizeof(r));
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			scanf("%d",&b[i][j]);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
				r[i][j]=result(i,j);
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d ",r[i][j]);
		}
		printf("\n");
	}
	return 0;
}
