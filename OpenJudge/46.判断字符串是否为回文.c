#include<stdio.h>
#include<string.h>
int main()
{
	char a[101]={0},b[101]={0};
	int i,len;
	gets(a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		b[len-i-1]=a[i];
	}
	if(strcmp(a,b)==0)
	printf("yes");
	else printf("no");
	return 0;
}
