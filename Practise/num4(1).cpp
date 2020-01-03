#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char a[100];
	int alpha=0,num=0,c=0;
	int i=0;
	while((a[i++]=getchar())!='\n');
	a[i-1]='\0';
	int len;
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(islower(a[i])==1||isupper(a[i])==1) alpha++;
		else if(isdigit(a[i])==1) num++;
		else c++;
	}
	printf("%d %d %d",alpha,num,c);
}
