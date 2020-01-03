#include <stdio.h>
int main()
{
		long long Sn=0,i,t=1;
		int n;
		scanf("%d",&n);
		for(i=1; i<=n ;i++)
		{
			t=t*i;
			Sn+=t;	
		}
		printf("%lld\n",Sn); 
	return 0;
}
