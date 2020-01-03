#include<stdio.h>
int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	int min;
	if(a<b) {
		min=b;
	} else {
		min=a;
	}
	int i;
	for(i=min;i>=1;i--){
		if(a%i==0&&b%i==0){
			printf("%d %d\n",i,a*b/i);
			break;
		}
	} 
	return 0;
}

