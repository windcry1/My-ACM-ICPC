#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,t=1,m=0;
	scanf("%lld",&n);
	if(n==0) {
		printf("0\n");
		return 0;
	}
	n=abs(n);
	for(long long i=1;i<=n;i++){
		if(n<=((i+1)*i)/2){
			t=i;
			break;
		}
	}
	m=(t+1)*t/2-n;
	if(!(m&1)) printf("%lld\n",t);
	else {
		printf("%lld\n",!(t&1)?t+1:t+2);	
	}
	return 0;
}
