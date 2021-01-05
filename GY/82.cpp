#include<stdio.h>
int C(int n,int m){
	if(m==0) return 1;
	return C(n,m-1)*(n-m+1)/m;
}
int main(){
	int a,b;
	while(~scanf("%d%d",&a,&b)){
		if(a==0&&b==0) break;
		if(a<b) printf("error!\n");
		else printf("%d\n",C(a,b));
	}
	return 0;
}

