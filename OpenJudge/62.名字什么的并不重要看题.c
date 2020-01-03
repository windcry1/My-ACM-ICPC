#include<stdio.h>
#include<math.h>
int main()
{
	double a[101],r[101],temp;
	int i,j,t,n;
	scanf("%d",&t); 
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lf",&a[i]);
		}
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(a[j]<a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			} 
		}
		for(i=0;i<n;i++)
		{
			r[i]=2*sqrt(a[i]*a[i]-1);
		}
		temp=0;
		for(i=0;i<n;i++)
		{
			temp+=r[i];
			if(temp>=20)
			{
				printf("%d\n",i+1);
				break;
			}
		}
	}
	return 0;
}
