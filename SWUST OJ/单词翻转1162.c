#include<stdio.h>
int main()
{
	char str[1001][15],t;
	int i=0,j=0;
	while (1)
	{
		t=getchar();
		if(t==32)
		{
		i=i+1;j=0;
		}
		else if(t=='\n')
		break;
		else
		{
			str[i][j]=t;
			j++;
		}
	}
	//printf("%d",i);
		for(j=i;j>=0;j--)
	{
		printf("%s ",str[j]);
	}
	return 0;
} 
