#include<stdio.h>
int main(){
	int n;
	while(~scanf("%d",&n)){
		int res=1;
		while(n!=0){
			if(n%2==1) res*=2;
			n/=2;
		}
		printf("%d\n",res);
	}
	return 0;
}
