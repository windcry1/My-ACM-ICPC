#include<stdio.h>
#include<math.h>
int main()
{
	int a[10],b[10],i,j,n,sum=0;
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
		a[i]=n%10;
		n/=10;
		if(n==0)
			break;
	}
	for(j=0;j<i+1;j++)
	{
		if((a[j]%2==0&&(j+1)%2==0)||(a[j]%2==1&&(j+1)%2==1))
			b[j]=1;
		else
			b[j]=0;
	}
	for(j=0;j<i+1;j++)
	{
		sum+=pow(2,j)*b[j];
	}
	printf("%d\n",sum);
	return 0;
 } 
