#include<stdio.h>
#include<string.h>
int main()
{
	char n[100000];
	int a,len;
	while(scanf("%s",n)!=EOF)
	{
	len=strlen(n);
	a=(n[len-2]-48)*10+n[len-1]-48;
	if(a%4==0)
	{
		printf("4\n");
	}
	else printf("0\n");
	}
	return 0;
}
