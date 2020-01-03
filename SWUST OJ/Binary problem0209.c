#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int m,n,a[21]={0},i;
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		memset(a,0,sizeof(a));
		int sum=0; 
		for(i=0;;i++)
		{
			if(m==0)
				break;
			{
				a[i]=m%2;
				m/=2;
			}
		}
		for(i=n-1;i>=0;i--)
		{
			sum+=pow(2,n-1-i)*a[i];
		}
		printf("%d\n",sum);
	}
	return 0;
}
