#include <stdio.h>
#include <math.h>
int main()
{ 
	double p,l,a,t,T;
	int n;
	t=int(a);
	T=int(a/2);
	if(a==0)
	{
		break;
	}
	else if(a<=4)
	{
		p=10; printf("%g\n",p);
	}	
	else if(a>4 && a<=8)
	{
		p=(t-4)*2+10; printf("%g\n",p);
	}
	else if(a>8 && a<=16)
	{
		p=(t-8)*2.4+18;
		l=((T-4)*2+10)*2;
		if(p>l)
		{
			printf("%g\n",l);
		}
		else
		{
			printf("%g\n",p);
		}
	}
	else if(a>16)
	{
		l=(T-8)*2.4+18; printf("%g\n",l);
	}
return 0;
}
