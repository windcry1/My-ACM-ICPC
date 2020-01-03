#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,i,t1,t2,c,d;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		t1=a;
		t2=b;
		c=0;
		d=0;
		while(t1!=0)
		{
			c=c*10+(t1%10);
			t1/=10;
		}
		while(t2!=0)
		{
			d=d*10+(t2%10);
			t2/=10;
		}
		printf("%d\n",c+d);
	}
	return 0;
} 
