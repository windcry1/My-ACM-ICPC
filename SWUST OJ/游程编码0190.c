#include<stdio.h>
#include<string.h>
int main()
{
	char str[10000];
	int n=1,i,len;
	scanf("%s",str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]==str[i+1])
		{
			n++;
		}
		if(str[i]!=str[i+1])
		{
			printf("%d%c",n,str[i]);
			n=1;
		}
	}
	printf("\n"); 
	return 0;
}
