#include<stdio.h>
#include<string.h>
int main()
{
	char str[10000];
	int i,len,num=0;
	scanf("%s",str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{	
		if(str[i]>=48&&str[i]<=57)
		{
			num++;
		}
		else
		{
			printf("ERROR!");
			break;
		}
	}
	if(num==len)
	printf("%d %s ",len,str);
	return 0;
} 
