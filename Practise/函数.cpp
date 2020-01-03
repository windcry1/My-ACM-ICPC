#include<stdio.h>
int Max(int n,int a)
{
	return n>a?n:a;
}
int Min(int n, int a)
{
	return n>a?a:n;
}
int Add(int x, int y)
{
	return x+y;
}
int Gcd(int x, int y)
{
	for(int i=x;i>=1;i--)
	{
		if(x%i==0&&y%i==0)
			return i;
	}
}
int main()
{
	int a,b;
	char str[1001];
	scanf("%s",str);
	a=str;
	printf("%d\n",a);
	return 0;
} 
