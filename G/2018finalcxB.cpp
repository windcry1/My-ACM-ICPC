#include<stdio.h>
long long a[600000000];
int main() {
	long long n;
	while(~scanf("%lld",&n)) {
		long long m,sum=0,b=1,c=4;
		while(1) {
			sum=sum+b;
			if(n<=sum) {
				sum=sum-b;
				break;
			} else {
				b=b*2;
			}
		}
		m=n-sum;
		a[1]=2;
		a[2]=4;
		a[3]=4;
		a[4]=8;
		for(int i=5; i<=m; i++) {
			a[i]=a[i%c==0?c:i%c]*2;
			if(i%c==0) c=c*2;
		}
		printf("%lld\n",a[m]);
	}
	return 0;
}

