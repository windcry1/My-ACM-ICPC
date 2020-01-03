#include<stdio.h>
#include<string.h>
int main ()
{
	char str[256];
	int i,num=0;
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]>='0'&&str[i]<='9')
		{
			num++;
		}
	}
	printf("%d",num);
	return 0;
}
