/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/6/2019 4:54:32 PM
*************************************************************************/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[1010];
	scanf("%s",str);
	int len=strlen(str);
	printf("%d\n",len);
	for(int i=0;i<len;i++)
		printf("%c%c",str[i],i==len-1?'\n':' ');
	for(int i=len-1;i>=0;i--)
		printf("%c",str[i]);
	putchar('\n');
	return 0;
}

