#include<bits/stdc++.h>
#define ll long long
#ifdef WindCry1
#define DEBUG(x) cout<<#x<<" : "<<x<<endl;
#endif
const ll mod = 998244353;
int a[100010],b[100010],c[100010],n;
int main(){
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
	freopen("C:/Users/LENOVO/Desktop/out.txt","w",stdout);
#endif
	int T;for(scanf("%d",&T);T--;){
		scanf("%d",&n);
		for(int i=0;i<=n;i++) scanf("%d",a+i);
		a[n+1]=0;
		for(int i=2;i<=n;i++) scanf("%d",b+i);
		b[n+1]=0;
		for(int i=2;i<=n;i++) scanf("%d",c+i);
		c[n+1]=0;
//		if(n>1000){
//			int res=1;
//			for(int i=2;i<=n;i++){
//				res=(ll)res*c[i]%mod;
//			}
//			res=(ll)res*a[n]%mod;
//			printf("%d\n",res);
//			continue;
//		}Âðo'p 
		for(int i=2;i<=n;i++)
			for(int j=0;j<=n;j++)
				a[j]=((ll)(j+1)*a[j+1]%mod*b[i]%mod+(ll)a[j]*c[i]%mod)%mod;
		for(int i=0;i<=n;i++) {
			printf("%d",a[i]);
			putchar(" \n"[i==n]);
		}
	}
	return 0;
}


