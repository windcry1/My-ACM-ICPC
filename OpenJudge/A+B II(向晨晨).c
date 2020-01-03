#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,m,n,j,i;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
  	scanf("%d%d%d%d%d%d",&b,&c,&d,&e,&f,&g);
  	{
	m=b+e;
	n=c+f;
	j=d+g;	
	while(j-60>=0)
	{
	j=j-60;
	n++;
	}
	while(n-60>=0)
	{
	n=n-60;
	m++;
	}	
	printf("%d %d %d\n",m,n,j);
	}
	}
	return 0;
}
