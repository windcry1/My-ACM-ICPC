#include<stdio.h>
#include<string.h>
char s[101]={0},s1[101]={0};
int i,n;
int main()
{
	gets(s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(i<=n-2)
		{
			s1[i]=s[i]+s[i+1];
		}
		else
		  if(i==n-1)
		  {
		  	s1[i]=s[i]+s[0];
		  }
		printf("%c",s1[i]);
	}
	return 0;
}

