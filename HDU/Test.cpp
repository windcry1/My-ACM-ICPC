#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<iostream>
using namespace std;
typedef long long ll;
 
const int P=1000000009;
const int INVSQRT5=276601605;
const int A=691504013;
const int B=308495997;
 
const int N=100005;
 
ll n,K;
ll fac[N],inv[N];
ll pa[N],pb[N];
 
inline void Pre(int n){
  fac[0]=1; for (int i=1;i<=n;i++) fac[i]=fac[i-1]*i%P;
  inv[1]=1; for (int i=2;i<=n;i++) inv[i]=(P-P/i)*inv[P%i]%P;
  inv[0]=1; for (int i=1;i<=n;i++) inv[i]=inv[i]*inv[i-1]%P;
  pa[0]=1; for (int i=1;i<=n;i++) pa[i]=pa[i-1]*A%P;
  pb[0]=1; for (int i=1;i<=n;i++) pb[i]=pb[i-1]*B%P;
}
 
inline ll C(int n,int m){
  return fac[n]*inv[m]%P*inv[n-m]%P;
}
 
inline ll Pow(ll a,ll b){
  ll ret=1;
  for (;b;b>>=1,a=a*a%P)
    if (b&1)
      ret=ret*a%P;
  return ret;
}
 
inline ll Inv(ll x){
  return Pow(x,P-2);
}
 
inline void Solve(){
  ll Ans=0;
  for (int j=0;j<=K;j++){
    ll t=pa[K-j]*pb[j]%P,tem;
    tem=t==1?n%P:t*(Pow(t,n)-1+P)%P*Inv(t-1)%P;
    printf("C(K,j)*tem%%P: %lld\n",C(K,j)*tem%P);
    if (~j&1)
      Ans+=C(K,j)*tem%P,Ans%=P;
    else
      Ans+=P-C(K,j)*tem%P,Ans%=P;
  }
  Ans=Ans*Pow(INVSQRT5,K)%P;
  printf("%lld\n",Ans);
}
 
int main(){  
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	int T;
  Pre(100000);
  scanf("%d",&T);
  while (T--){
  	ll c;
cout<<endl;
for(int i=0;i<=3;i++) cout<<fac[i]<<" ";cout<<endl;
for(int i=0;i<=3;i++) cout<<inv[i]<<" ";cout<<endl;
cout<<endl;
    scanf("%lld%lld%lld",&n,&c,&K);
    Solve();
  }
}
