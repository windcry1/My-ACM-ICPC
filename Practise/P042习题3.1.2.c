#include <stdio.h>
main()
{
	int x=32,y=81,p,q;
	p=x++;q=--y;
	printf("%d %d\n",p,q);
	printf("%d %d\n",x,y);
	return 0;
}
