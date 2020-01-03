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
		if(i<=len-2)
		{
			b[i]=a[i]+a[i+1];
		}
		else
		  if(i==len-1)
		  {
		  	b[i]=a[i]+a[0];
		  }
		printf("%c",b[i]);
	}
	return 0;
}
