#include <stdio.h>
int main()
{
	int hour,minute,i,n,h,m;
	scanf("%d",&n);
	for(i=0 ; i<n ; i++)
	{
		scanf("%d:%d",&hour,&minute);
		h=13+hour;
		m=15+minute;
		if(m>=60)
		{
			h=h+1;
			m=m-60;
		}
		if(h>=24)
		{
			h=h-24;
		}
		printf("%d:%d\n",h,m);
	}
	return 0;
} 
