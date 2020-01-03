#include<stdio.h>
int max(int a,int b,int c) {
	int d=a;
	if(b>d)d=b;
	if(c>d)d=c;
	return d;
}
int max(int a,int b,int c);
int main() {
	int a = 0,b = 0,c = 0;
	scanf("%d %d %d",&a,&b,&c);
	int m = max(a,b,c);
	printf("%d\n",m);
	return 0;
}
