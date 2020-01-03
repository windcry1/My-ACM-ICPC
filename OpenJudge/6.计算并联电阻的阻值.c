#include<stdio.h>
int main()
{
	float R,r[2];
	scanf("%f %f",&r[0],&r[1]);
	printf("%.2f",1/((1/r[0])+(1/r[1])));
	return 0;
}
