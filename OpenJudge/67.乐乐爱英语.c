#include<stdio.h>
#include<string.h>
int main()
{
	char str[501][21];
	int i=0,j,k,sum[501],num=0;
	memset(sum,0,sizeof(sum));
	while(scanf("%s",str[i++])!=EOF);
	for(j=0;j<i-1;j++)
	{
		if(strcmp(str[j],",")==0||strcmp(str[j],".")==0)
			continue;
		sum[j]++;num++;
		for(k=j+1;k<i-1;k++)
		{
			if(strcmp(str[j],str[k])==0)
			{
				sum[j]++;
				strcpy(str[k],".");
			}
		}
		strcpy(str[j],".");
	}
	printf("%d\n",num);
	for(j=0;j<i-1;j++)
	{
		if(sum[j]==0)
			continue;
		printf("%d ",sum[j]);
	}
	return 0;
}
