#include<stdio.h>
int main()
{
	char a;
	int sum=0;
	while ((a = getchar()) != '\n')
	{
		if (a >= '0' && a <= '9')
		{
			sum++;
		}
	}
		printf("%d\n",sum); 
	return 0;		
}
