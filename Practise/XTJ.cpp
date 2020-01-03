#include<stdio.h>
int main()
{
	int a,b,c,i=1;
	float sum=0;
	scanf("%d %d %d",&a,&b,&c);
	while(i<=a)
		sum+=i++;
	i=1;
	while(i<=b)
	{
		sum+=i*i;
		i++;
	}
	i=1;
	while(i<=c)
		sum+=1.0/(float)(i++);
	printf("%.2f\n",sum);
	return 0;
}
