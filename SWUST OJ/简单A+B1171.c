#include<stdio.h>
#include<string.h>
int main()
{
	int a[3],b[3],c[3],i;
	while(scanf("%d%d%d",&a[0],&a[1],&a[2])!=EOF)
	{
		memset(c,0,sizeof(c));
	for(i=0;i<3;i++)
	{
		scanf("%d",&b[i]);
	}
		if(b[2]+a[2]>=60)
		{
			c[2]+=a[2]+b[2]-60;
			c[1]++;
			if(b[1]+a[1]+1>=60)
			{
				c[1]+=a[1]+b[1]-60;
				c[0]+=a[0]+b[0]+1;
			}
			else
			{
				c[1]+=a[1]+b[1];
				c[0]+=a[0]+b[0];
			}
		}
		else if(b[1]+a[1]>=60)
		{
			c[2]+=a[2]+b[2];
			c[1]+=a[1]+b[1]-60;
			c[0]+=a[0]+b[0]+1;
		}
		else
		{
			c[0]+=a[0]+b[0];
			c[1]+=a[1]+b[1];
			c[2]+=a[2]+b[2];
		}
		printf("%02d:%02d:%02d\n",c[0],c[1],c[2]);
	}
	return 0;
} 
