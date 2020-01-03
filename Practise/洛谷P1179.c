#include<stdio.h>
int main()
{
	int A,B,i,ans=0;
	scanf("%d %d",&A,&B);
		ans=0;
	for(i=A;i<=B;i++)
	{
		if(i%10==2)
			ans++;
		if( (i/10)%10==2 )
		    ans++;
		if((i/100)%10==2)
		    ans++;
		if((i/1000)%10==2)
		    ans++;
		if((i/10000)%10==2)
		    ans++;
	}
	printf("%d\n",ans);
	return 0;
}
