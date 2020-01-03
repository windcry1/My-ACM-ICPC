#include  <stdio.h>
int main()
{
		int a; 
		char c;
		scanf("%d",&a);
		if(a>=90) c='A';
		else if(a<90 && a>=80) c='B';
		if(a<80 && a>=70) c='C';
		if(a>=60 && a<70)c='D';
		if(a<60)c='E';
		printf("%c\n",c);	
	return 0;
}
