#include<stdio.h>
int main()
{
	int i,n,a,b;
	char op;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%c%d",&a,&op,&b);
	if(op=='+')
	{
		printf("%d%c%d=%d\n",a,op,b,a+b);
	}
	if(op=='-')
	{
		printf("%d%c%d=%d\n",a,op,b,a-b);
		
	}
	if(op=='*')
	{
		printf("%d%c%d=%d\n",a,op,b,a*b);
	}
	if(op=='/')
	{
		printf("%d%c%d=%d\n",a,op,b,a/b);
	}
	} 
	return 0;
}
