#include<stdio.h>
void swap(int *a,int *b){
	int t=*a;//ȡ��ַa����ı�������int t 
	*a=*b;//ȡ��ַb����ı�������a��ַ����ı����ռ� 
	*b=t;//ȡt����b��ַ����ı����ռ� 
}
int main(){
	int a=0,b=1;
	swap(&a,&b);
	printf("%d %d\n",a,b);
}
