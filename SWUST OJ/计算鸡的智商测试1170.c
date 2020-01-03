#include<stdio.h>
#include<string.h>
int main()
{
	char str[10001];
	int i,j,sum;
	while(scanf("%s",str)!=EOF)
	{
		sum=0;
	for(i=0;i<strlen(str);i++)
	{
		sum+=str[i]-48;
	}
	printf("%d %d\r\n",strlen(str),sum);
	}
	return 0;
 } 
