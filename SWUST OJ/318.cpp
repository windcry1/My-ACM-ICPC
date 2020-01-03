#include"stdio.h"
int main()
{
	int a,d,f;
	int b[100000],c[100000];
	
	while(scanf("%d",&a)!=EOF)
{
	int e=a;	
	for(int i=0;;i++)
	{
		b[i]=a%2;
		a/=2;
		d=i;
		if(a==0){
			break;
		}
	}
	for(int j=d;j>=0;j--)
	{
		printf("%d",b[j]);
	}
	printf("\n");
	for(int m=0;;m++)
	{
		c[m]=e%8;
		e/=8;
		f=m;
		if(e==0){
			break;
		}
	}
	for(int j=f;j>=0;j--)
	{
		printf("%d",c[j]);
	}
	printf("\n"); 
}
	return 0;
 } 
