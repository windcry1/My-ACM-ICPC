#include <stdio.h>
int main()
{
	int t,a,n,i,s;
	scanf("%d %d",&a,&n);
	t=a;
	for(i=1;i<=n;i++)
	{
		s+=t;
		t=t*10+a;	
	}
	printf("%d\n",s);
	return 0;
}
