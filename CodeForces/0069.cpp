#include<stdio.h>
int main()
{
	int m;
	int h;
	int t;
	int n;
	scanf("%d",&n);
	while(n--)
	{
	
		scanf("%d:%d",&h,&m);
		if(m<45&&h<11)
		{
			m=m+15;
			h=h+13;
		}
		else if(m<45&&h>=11)
		{
			m=m+15;
			h=h+13-24;
		}
		else  if(m>=45&&h<11)
		{
			m=m+15-60;
			h=h+14;
		}
		else if(m>=45&&h>=11)
		{
		m=m+15-60;
		h=h+14-24;	
		}
		printf("%d:%d\n",h,m);
	}
}

