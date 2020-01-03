#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf(a>=65&&b>=60&&c>=70&&a+b+c>=210?"Pass\n":"Fail\n");
	return 0;
}
