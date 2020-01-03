#include <iostream>
#include <string>
#include<cstring>
#define M(x,y) x%y
using namespace std;
int d=1;
void fun(int  *q)
{
	int i=0;
	for(;i<5;i++)
	{
		(*q)++;
	}
}
int main() 
{
	int a[5]={1,2,3,4,5},i;
	fun(a);
	for(i=0;i<5;i++)
		printf("%d",a[i]);
	return 0;	
} 

