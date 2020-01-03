#include<stdio.h>
int main()
{
	int i,j,a[5][5],max[5]={0},min[5],MA,MI;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<5;i++)
	{
		min[i]=a[0][i];
	}//最小值初始化 
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(min[i]>a[j][i])
			min[i]=a[j][i];
		}
	}//求每一列最小值 
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(max[i]<a[i][j])
			{
			max[i]=a[i][j];
			}
		}
	}//求每一行最大值 
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(max[i]==min[j])
			printf("%d %d %d",i+1,j+1,max[i]); 
		}
	}
	return 0;
} 
