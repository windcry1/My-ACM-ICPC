/*
��һЩװ���˺�Ǧ�ĺ��ӣ��������㹻�࣬
Ҫ���30�����ӷų�һ�У��������������˷���һ��
���ж����ַ��� 
5	8
6	20
7	47
8	107 
*/
#include<stdio.h>
long long F(int n)
{
	long long result;
	if(n==0||n==1||n==2)
	{
		result=0;
	}
	else if(n==3)
	{
		result=1;
	}
	else
	{
		result=2*F(n-1)+pow(2,n-4)-F(n-4);
	}
	return result;
} 
int main()
{
	int n;
	long long result;
	scanf("%d",&n);
	result=F(n);
	printf("%lld\n",result);
}
