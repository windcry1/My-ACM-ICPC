#include<stdio.h>
int main()
{
	int A,B,i,ans=0;
	while(scanf("%d %d",&A,&B)!=EOF)
	{
		ans=0;
	for(i=A;i<=B;i++)
	{
		if(i%10==2 || (i/10)%10==2 || (i/100)%10==2 || (i/1000)%10==2)
		{
			
		}
		else
		{
			ans+=1;
		}
	}
	printf("%d\n",ans);
	}
	return 0;
}
