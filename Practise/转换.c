#include<stdio.h>
int main()
{
	while(1)
	{
		char c[2];
		scanf("%s",c);
		printf("%d\n",c[0]-64);
	}
	return 0;
}
