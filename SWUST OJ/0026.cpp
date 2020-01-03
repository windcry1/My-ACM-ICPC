#include<stdio.h>//头文件 
int main() {
	int a;//定义变量a 
	while(scanf("%d",&a)!=EOF) {//多组输入a,即不停输入a的值 
		int res1=0;//定义变量res1 
		while(a!=0) {//当a!=0的时候进入循环，因为要查到a的每一位，a等于0的时候就查到底了 
			res1=res1*10;//res1乘10，即向左移动一位，给新的数字空间存数 
			res1=res1+a%10;//res1加上当前a的最后一位 
			a=a/10;//a向左移动一位 
		}
		int b;
		int res2=0;
		scanf("%d",&b);
		while(b!=0) {
			res2=res2*10;
			res2=res2+b%10;
			b=b/10;
		}
		/*以上b的运算全部同理*/ 
		printf("%d\n",res1+res2);//最后输出两翻转数之和
		/*
		注意：	OJ交题不能输出无关字符，否则会Wrong Answer
				多组输入时注意循环优先顺序，防止变量未赋值，比如这里res1要定义在里面，不然下次循环到这里的时候res1就不是0；额 
				以上
		PS：	多学习哦，你会变得更强！！！ 
		*/ 
	}
	return 0; 
}

