#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int i=0,j;
	char a[100],b[100],c[100];
	while((a[i++]=getchar())!='\n');
	a[i-1]='\0';
	i=0;
	while((b[i++]=getchar())!='\n');
	b[i-1]='\0';
	i=0; 
	while((c[i++]=getchar())!='\n');
	c[i-1]='\0';
	int len1,len2,len3;
	len1=strlen(a);
	len2=strlen(b);
	len3=strlen(c);
	int flag=0;
	for(i=0;i<len1;i++)
	{
		if(isalpha(a[i])==0)
		flag++;
		else continue;
	}
	for(i=0;i<len2;i++)
	{
		if(isalpha(b[i])==0)
		flag++;
		else continue;
	}
	for(i=0;i<len3;i++)
	{
		if(isalpha(c[i])==0)
		flag++;
		else continue;
	}
	printf("%d\n",flag);
}
