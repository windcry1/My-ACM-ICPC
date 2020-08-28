/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/30/2019 11:03:37 PM
*************************************************************************/
#include<stdio.h>
#define ll long long
const ll mod = 1e9+9;
ll fac[100010],inv[100010],prea[100010],preb[100010];
const int a=691504013;
const ll b=308495997;
const ll kmod=276601605;
int i,j;
int qmi(int a,ll b){
    int res=1;
    while(b){
        if(b&1) res=(ll)res*a%mod;
        a=(ll)a*a%mod;
        b>>=1;
    }
    return res;
}
ll C(int n,int m){
  return fac[n]*inv[m]%mod*inv[n-m]%mod;
}
int main(){
#ifdef WindCry1
    freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	fac[0]=1;inv[1]=1;
	for(i=1;i<=100000;i++) fac[i]=fac[i-1]*i%mod;
    for(i=2;i<=100000;i++) inv[i]=(mod-mod/i)*inv[mod%i]%mod;
    inv[0]=1; for(i=1;i<=100000;i++) inv[i]=inv[i]*inv[i-1]%mod;
    prea[0]=1;preb[0]=1;
    
    int T;for(scanf("%d",&T);T--;){
       	int res=0;
        ll n,c;int k;scanf("%lld%lld%d",&n,&c,&k);
        int ta=qmi(a,c),tb=qmi(b,c);
        for(i=1;i<=k;i++) prea[i]=(ll)prea[i-1]*ta%mod;
    	for(i=1;i<=k;i++) preb[i]=(ll)preb[i-1]*tb%mod;
        for(j=0;j<=k;j++){
            int t=prea[k-j]*preb[j]%mod;
            int tt=(t==1?n%mod:(qmi(t,n+1)-t+mod)%mod*qmi(t-1,mod-2)%mod);
            if(~j&1) res=(res+C(k,j)*tt%mod)%mod;
            else res=(res-C(k,j)*tt%mod+mod)%mod;
        }
        res=(ll)res*qmi(kmod,k)%mod;
        printf("%lld\n",res);
    }
    return 0;
}
