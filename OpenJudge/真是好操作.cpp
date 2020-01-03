#include<stdio.h>
#include<string.h>
int binary( int n )
{
	int result=0,k=1,i,temp;
	temp = n;
	while(temp)
	{
		i = temp%2;
		result = k * i + result;
		k = k*10;
	temp = temp/2;
	}
	return result;
} //求二进制数的函数 
int main()
{
	int n,a,b,c,a2,b2,c2,a[10],b[10],c[10];
	while(scanf("%d",&n)!=EOF)
	{
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		memset(c,0,sizeof(c));
		int num=0;
	for(a=0;a<=n;a++)//顺便提取每一位 
	{
		a2=binary(a);
		for(i=0;i<10;i++)
		{
			a[i]=a2%10;
			a2/=10;
		}
		for(b=0;b<n;b++)
		{
			b2=binary(b);
			for(i=0;i<10;i++)
			{
				b[i]=b2%10;
				b2/=10;
			}
			for(c=0;c<n;c++)	
			{
				c2=binary(c);
				for(i=0;i<10;i++)
				{
					c[i]=c2%10;
					c2/=10;
				}
				for()
			}		
		}
	}
	}
	return 0;
}
