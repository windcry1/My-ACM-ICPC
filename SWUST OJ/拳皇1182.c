#include<stdio.h>
int main()
{
	int health1,health2,harm1,harm2,i,j;
	while(scanf("%d%d%d%d",&health1,&harm1,&health2,&harm2)!=EOF) 
	{
	for(i=0;;i++)
	{
		health2-=harm1;
		if(health2<=0)
		{
			printf("Left\n");
		break;
		}
		health1-=harm2;
		if(health1<=0)
		{
			printf("Right\n");
		break;
		}
	} 
	}
	return 0;
}
