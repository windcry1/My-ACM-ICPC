#include<stdio.h>
#include<string.h>
struct people
{
	long long num;
	char name[20];
};
int main()
{
	int n,t,i,j;
	char bian[20];
	struct people b[100];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s %lld",b[i].name,&b[i].num);
	} 
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			if(b[j].num<b[j+1].num)
			{
				t=b[j].num;
				b[j].num=b[j+1].num;
				b[j+1].num=t;
				strcpy(bian,b[j].name);
				strcpy(b[j].name,b[j+1].name);
				strcpy(b[j+1].name,bian);
			}
			if(b[j].num==b[j+1].num)
			{
				int bi=strcmp(b[j].name,b[j+1].name);
				if(bi>0)
				{
					strcpy(bian,b[j].name);
					strcpy(b[j].name,b[j+1].name);
					strcpy(b[j+1].name,bian);
				}	
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		printf("%s %lld\n",b[i].name,b[i].num);
	}
	return 0;
}
