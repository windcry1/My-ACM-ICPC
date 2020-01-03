#include<stdio.h>
int main()
{
	int l,r,t,e,i,num,count;
	while(scanf("%d%d",&l,&r)!=EOF)
	{
		for(i=l;i<=r;i++)
		{
			t=i;
			num=0;count=0;
			while(t!=0)
			{
				num++;e=t%10;
				if(e==0)
					break;
				if(i%e==0)
				{
					count++;
				}
				t/=10; 
			}
			if(count==num)
			printf("%d ",i);
		}
		printf("\n");
	} 
	return 0;
} 
