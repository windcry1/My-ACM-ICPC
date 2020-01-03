#include<stdio.h>
#define ll long long
ll a[11][11];
int main(){
	for(int i=0;i<10;i++) {
		for(int j=1;j<=10;j++) {
			a[i][j]=j*i%10;
		}
	}
	int T;
	scanf("%d",&T);
	while(T--) {
		ll n,m;
		scanf("%lld%lld",&n,&m);
		n/=m;
		ll t=m%10,sum=0;
		for(int i=1;i<=10;i++){
			sum+=a[t][i];
		}
		ll res=n/10*sum;
		for(int i=1;i<=n%10;i++){
			res+=a[t][i];
		}
		printf("%lld\n",res);
	} 
	return 0;
}
