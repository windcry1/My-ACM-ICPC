#include<stdio.h>
int main()
{
	double len;
	int i,j;
	scanf("%lf",&len);
	for(i=0;;i++)
	{
		for(j=0;j<12;j++)
		{
			if(len<(i+j/12.0)*30.48)
				break;
		}
		if(len<(i+j/12.0)*30.48)
				break;
	}
	printf("%d %d\n",i,j-1);
	return 0;
} 
