#include <stdio.h>
int main()
{
    int n,a[301],i,num1,num2,j,sum=0;
    scanf("%d",&n);
    for(i=0;i<=300;i++)
    {
    	a[i]=0;   	
	}
    for(i=0;i<n;i++)
    {
    	scanf("%d%d",&num1,&num2);
    	for(j=num1;j<=num2;j++)
    	{
    		a[j]=1;
		}
	}
	for(i=0;i<=300;i++)
	sum+=a[i];
	printf("%d\n",sum);
    return 0;
}
