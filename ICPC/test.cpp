#include<stdio.h>
void swap(int *a,int *b){
	int t=*a;//取地址a里面的变量赋给int t 
	*a=*b;//取地址b里面的变量赋给a地址里面的变量空间 
	*b=t;//取t赋给b地址里面的变量空间 
}
int main(){
	int a=0,b=1;
	swap(&a,&b);
	printf("%d %d\n",a,b);
}
