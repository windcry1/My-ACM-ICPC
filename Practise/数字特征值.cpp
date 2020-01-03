#include <stdio.h>
int main()
{
	int x=0;
	int m=0;
	scanf("%d",&x);
	int A=0,B=0,C=0,D=0,E=0,F=0,G=0;
	A=(x/1000000);
if(x==0){m=42;}else	{
	if(A==1)
	  {m=106;
	  }
	else
	  {
	G=(x%10);
//	printf("%d",G);
	F=(x%100-G)/10;
	E=(x%1000-10*F-G)/100;
	D=(x%10000-100*E-10*F-G)/1000;
	C=(x%100000-1000*D-100*E-10*F-G)/10000;
	B=(x-10000*C-1000*D-100*E-10*F-G)/100000;
//	printf("%d %d %d %d %d %d %d\n",A,B,C,D,E,F,G);
    if((G%2)==1){G=1;}else{G=0;}
    if((F%2)==0){F=2;}else{F=0;}
    if((E%2)==1){E=4;}else{E=0;}
	if((D%2)==0){D=8;}else{D=0;}
	if((C%2)==1){C=16;}else{C=0;}
	if((B%2)==0){B=32;}else{B=0;}
//  printf("%d %d %d %d %d %d %d\n",A,B,C,D,E,F,G);
	m=B+C+D+E+F+G;
	  }
}
	
	printf("%d",m);
	return 0;
}
