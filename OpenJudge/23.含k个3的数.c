#include<stdio.h>
int main()
{
	int m,k,a[6]={0},i,ans=0,x;
	scanf("%d%d",&m,&k);
	x=m;
	for(i=0;i<=5;i++)
	{
		a[i]=m%10;
		m/=10;
	}
	for(i=0;i<=5;i++)
	{
		if(a[i]==3)
		ans++;
	}
	if(x%19==0 && k==ans)
	printf("YES");
	else printf("NO"); 
}
