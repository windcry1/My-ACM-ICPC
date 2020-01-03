#include<stdio.h>
int main()
{
	int a,b,t;
	while(~scanf("%d %d",&a,&b))
	{
		if(a>b)
		{
			t=a;
			a=b;
			b=t;
		} 
		int d;
		int count=0,flag=0;
		for(a;a<=b;a++)
		{
			flag=0;
			for(d=2;d<=a-1;d++)
			{
				if(a%d==0)
				{
					flag=1;
				}
			}
			if(flag==0)
				count++;
		}
		printf("%d\n",count);	
	}
	return 0;
}
