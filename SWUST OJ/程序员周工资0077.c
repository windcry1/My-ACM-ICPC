#include <stdio.h>
int main()
{
		double t,h,p;
		char c[80]="input is wrong!";
		scanf("%lf %lf",&h,&t);
		if(h<=40 && h>=0)
		{
			p=t*h;
			printf("%g\n",p);
		 } 
		 if(h>40 && h<=60)
		 {
		 	p=40*t+1.5*t*(h-40);
		 	printf("%g\n",p);
		 }
		 if(h>60 && h<=168)
		 {
		 	p=40*t+1.5*20*t+3*t*(h-60);
		 	printf("%g\n",p);
		 }
		 if(h<0 || h>168)
		 {
		 	printf("%s\n",c);
		 }
	return 0;
 } 
 
