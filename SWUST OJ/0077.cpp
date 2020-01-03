#include<stdio.h>
int main()
{
	int x;
	double t,p;
	scanf("%d %lf",&x,&t);
	if(x<=0||x>168){
		printf("input is wrong!\n");
	}else if(0<x&&x<=40){
		p=x*t;
		printf("%g\n",p);
	}else if(40<x&&x<=60){
		p=1.5*t*x-20*t;
		printf("%g\n",p);
	}else if(60<x&&x<=168){
		p=4.5*t*x-200*t;
		printf("%g\n",p); 
	}
	return 0;
}
