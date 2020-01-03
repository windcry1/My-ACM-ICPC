#include<stdio.h>
int main()
{
	int a1,a2,n,t;
	scanf("%d %d %d",&a1,&a2,&n);
	t=a2-a1;
	printf("%d",a1+(n-1)*t);
	return 0;
}
