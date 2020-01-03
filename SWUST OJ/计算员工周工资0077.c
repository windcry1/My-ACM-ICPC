#include<stdio.h>
int main()
{
	double time,reward;
	scanf("%lf%lf",&time,&reward);
	if(time<40&&time>=0)
	{
		printf("%g\n",time*reward*1.0); 
	}
	else if(time>=40&&time<60)
	{
		printf("%g\n",1.5*(time-40)*reward+40*reward);
	}
	else if(time>=60&&time<=168)
	{
		printf("%g\n",1.5*20*reward+3.0*(time-60)*reward+40*reward);
	}
	else if(time<0||time>168)
	{
		printf("input is wrong!\n");
	}
	return 0;
} 
