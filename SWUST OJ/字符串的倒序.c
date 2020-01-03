#include<stdio.h>
#include<string.h>
int main()
{
	char str[10000];
	scanf("%s",str);
	int i;
	for(i=strlen(str)-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
	printf("\n");
	return 0;
} 
