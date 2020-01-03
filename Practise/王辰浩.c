#include<stdlib.h>
#include<string.h>
#include<stdio.h>
int main()
{
	char n[80][80];
	int len,f,x,i;
	scanf("%d\n",&f);
	for(x=0;x<=f;x++)
	{
		gets(n[x]);
	}
	for(x=0;x<=f;x++)
	{
		len=strlen(n[x]);
	for(i=0;i<len;i++)
	{
		if(n[x][i]>='a'&&n[x][i]<='z'||n[x][i]>='A'&&n[x][i]<='Z')
		{
			if(n[x][i]!='z'&&n[x][i]!='Z')
			{
				n[x][i]=n[x][i]+1;				
				continue;
			}
		if(n[x][i]=='z') n[x][i]='a';	
		if (n[x][i]=='Z') n[x][i]='A';		
		}
	}
	puts(n[x]);
	}
	return 0;
}
