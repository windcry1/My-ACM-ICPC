#include <stdio.h>
int main()
{
	float A,B,C,D,t;
	int a,b,c,d;
	scanf("%d %d",&a,&b);
	scanf("%d %d",&c,&d);
	t=a*d-b*c;
	A=d/t;B=-b/t;
	C=-c/t;D=a/t;
	if(t!=0)
	{
	printf("%f %f \n",A,B);
	printf("%f %f \n",C,D);
	}
	return 0; 
}

