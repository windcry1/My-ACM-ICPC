#include<stdio.h>
#include<string.h>
int main()
{
	char str[201];
	while(scanf("%s",str)!=EOF)
	{
		int i,j;
		for(i=0;i<strlen(str);i++)
		{
			if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
			{
				printf("%c",str[i]);
			}
		}
		printf("\n");
		for(i=0;i<strlen(str);i++)
		{
			if(str[i]>='0'&&str[i]<='9')
			{
				printf("%c",str[i]);
			}
		}
		printf("\n");
		for(i=0;i<strlen(str);i++)
		{
			if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
			{
				
			}
			else if(str[i]>='0'&&str[i]<='9')
			{
				
			}
			else printf("%c",str[i]);
		}
		printf("\n");
	}
	return 0;
} 
