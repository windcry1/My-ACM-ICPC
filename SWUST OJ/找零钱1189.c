#include<stdio.h>
#include<string.h>
int main()
{
	int n,m,a,t,b[6]={100,50,20,10,5,1},c[6],num,i,j;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		memset(c,0,sizeof(c));
		num=0;
		a=n-m;
		t=a;
		printf("%d\n",a);
		for(i=0;i<6;i++)
		{
			for(j=0;;j++)
			{
				if(t<b[i])
				break;
				t-=b[i];
				c[i]++;
				
			}
		}
		for(i=0;i<6;i++)
		{
			num=0;
			for(j=i;j<6;j++)
			{
				if(c[j]==0)
				num++;
			}
			if(c[i]!=0)
			{
				printf("%d*%d",b[i],c[i]);
			if(num!=5-i)
			{
				printf("+");
			}
			//printf("%d\n",num);	
			if(num==5-i)
			{
				printf("=");
			}
			}
		}
		printf("%d\n",a);
	}
	return 0;
}
