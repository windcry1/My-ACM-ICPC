#include<stdio.h>
#include<math.h>
int main()
{
	long long a[88];
	int t,j,i,k,sum,num,n;
	scanf("%d",&n);
	for(i=2;i<=86;i++)
		{
			if(i==2)
				a[i]=0;
			sum=0;
			num=0;
			for(j=2;j<i;j++)
			{
				num=0;
				for(k=2;k<j;k++)
				{
					if(j%k==0)
					{
						num++;
					}
				}
			if(num==0)
				sum++;
			else if(num!=0)
				sum+=a[j];
			}
			a[i]=sum;
		}
	while(n--)
	{
		scanf("%d",&t);
		for(i=2;i<=85;i++)
		{
			if(t==a[i])
				break;
		}
		if(i!=86)
			printf("%d\n",i);
		if(i==86)
			printf("No\n");
	}
	return 0;
}
