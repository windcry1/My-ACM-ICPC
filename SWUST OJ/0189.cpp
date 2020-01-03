#include<stdio.h>
int prime(int n){
	int t=0;
	for(int i=2;i<=n-1;i++){
		if(n%i==0)
			t=1;
	}
	return t;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int count=0;
	for(int i=a;i<=b;i++){
		if(prime(i)==0)
			count++;
	}
	printf("%d\n",count);
	return 0;
}
