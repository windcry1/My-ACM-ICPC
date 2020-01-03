#include <stdio.h>
#include <math.h>
main()
{
	int a,b,c,num;
	scanf("%d",&num);
	num=fabs(num);
	a=(int)(num/100);
	b=(int)((num-a*100)/10);
	c=num%10;
	printf("%d",c*100+10*b+a);
	return 0;
}
