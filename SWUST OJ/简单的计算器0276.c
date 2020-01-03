#include<stdio.h>
int main()
{
	int a,b;
	char c;
	while(scanf("%d%c%d",&a,&c,&b)!=EOF)
	{
		if(c=='+')
		printf("%d%c%d=%d\n",a,c,b,a+b);
		if(c=='/')
		printf("%d%c%d=%d\n",a,c,b,a/b);
		if(c=='-')
		printf("%d%c%d=%d\n",a,c,b,a-b);
		if(c=='*')
		printf("%d%c%d=%d\n",a,c,b,a*b);
	}
	return 0;
} 
