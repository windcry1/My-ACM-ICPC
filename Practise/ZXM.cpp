#include"stdio.h"
#include"stdlib.h"
int main()
{
	int n,u,d;
	while (~scanf("%d %d %d",&n,&u,&d))
	{
		int time;
		int k=0;
		if(n==0&&(u!=0||d!=0))
			printf("0\n");
		else if(n<=0||u<=0||d<0)
		{
		 	exit(0);
		}
		else if(u<n&&n<1000)
		{
			time=2;
			for(int i=2;;i++)
			{
				k=(u-d)*(i-1)+u;
				if(k>=n)
				{
					time++;
					break;
				}
				else
				{
					time+=2;
				} 
			}
		printf("%d\n",time);
		}
		if(u>=n)
		{
			printf("1\n");
		}
	}	
	return 0;
} 
