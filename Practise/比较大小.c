#include<stdio.h>
int main()
{
	double a,b;//����˫���ȸ����� 
	scanf("%lf%lf",&a,&b);//���루˫���ȸ�������%lf 
	if(a<=b)printf("%.6lf",a);//���������6λ 
	else printf("%.6lf",b);
	return 0;
}

