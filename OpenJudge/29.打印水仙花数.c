#include <stdio.h>
int main() 
{ 
    int i,c,a,b;
    for(i=100;i<=999;i++)
    {
    	a=i%10;
    	b=(i/10)%10;
    	c=i/100;
    	if(i==a*a*a+b*b*b+c*c*c)
    	{
    		printf("%d\n",i);
		}
	}
    return 0;
}
