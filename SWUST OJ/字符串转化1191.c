#include<stdio.h>
#include<string.h> 
int main()
{
	char str[10000];
	long long i,num=0;
	while(scanf("%s",str)!=EOF)
	{
		num=0;
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]>='a'&&str[i]<='z')
		num+=str[i]-96;
	}
	printf("%lld\r\n",num);
	}
	return 0;
}
