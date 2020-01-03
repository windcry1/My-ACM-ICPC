#include<stdio.h>
#include<string.h>
int main()
{
	char a[101]={0},b[101]={0};
	while(scanf("%s",a)!=EOF)
	{ 
	int len,j;
	len=strlen(a);
	for(j=0;j<len;j++)
	{
		b[len-j-1]=a[j];
	}
	if(strcmp(a,b)==0)
	printf("Yes\n");
	else printf("No\n");
	} 
	return 0;
}
