#include<stdio.h>
#include<string.h> 
int main()
{
	char str[10000];
	int a[26],len,i;
	scanf("%s",str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		a[str[i]-97]++;
	}
	for(i=0;i<len;i++)
	{
		if(a[str[i]-97]==1)
		{
			printf("%c",str[i]);
			break;
		}
	}
	return 0;
} 
