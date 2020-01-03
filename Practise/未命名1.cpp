#include<stdio.h>

unsigned long Fact(int n);

int main()

{

	int m;

	unsigned long p;

	do{
		printf("input m(m>0):");
		scanf("%d",&m);
	}while(m<0);
	printf("%d = %lu\n",m,Fact(m));

	return 0;

}

unsigned long Fact(int n)

{

	unsigned int i;

	unsigned long result = 1;

	for(i = 2;i<=n;i++)

		result *= i;

	return result;

}
