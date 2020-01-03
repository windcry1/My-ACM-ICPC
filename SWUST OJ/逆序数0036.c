#include <stdio.h>
main()
{
	int n,a=0,b=0,c=0,d=0,e=0,x;
	scanf("%d",&n);
	a=n%10;
	b=((n-a)/10)%10;
	c=((n-a-b)/100)%10;
	d=((n-a-b-c))/1000%10;
	e=((n-a-b-c-d)/10000);
	if(e!=0)
	{
		x=5;
	}
	else if(d!=0)
		{
			x=4;
		}
		else if(c!=0)
			{
				x=3;
			}
			else if(b!=0)
				{
					x=2;
				}
				else
					{
						x=1;
					}
	printf("%d\n",x);
	if(x==1)
	{
		printf("%d\n",a);
		printf("%d",a);
	}
	if(x==2)
	{
		printf("%d %d\n",b,a);
		printf("%d%d\n",a,b);
	}
	if(x==3)
	{
		printf("%d %d %d\n",c,b,a);
		printf("%d%d%d\n",a,b,c);
	}
	if(x==4)
	{
		printf("%d %d %d %d\n",d,c,b,a);
		printf("%d%d%d%d\n",a,b,c,d);
	}
	if(x==5)
	{
		printf("%d %d %d %d %d\n",e,d,c,b,a);
		printf("%d%d%d%d%d\n",a,b,c,d,e);
	}
	return 0;
}
