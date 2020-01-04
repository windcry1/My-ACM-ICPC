#include<bits/stdc++.h>
using namespace std;
#define RI register int
const int mod=998244353,G=3,N=262150;
int n,kn,len,ans;
int a[N],b[N],fac[N],ni[N],rev[N];
int ksm(int x,int y) {
	int re=1;
	for(;y;y>>=1,x=1LL*x*x%mod) if(y&1) re=1LL*re*x%mod;
	return re;
}
void NTT(int *a,int n,int x) {
    for(RI i=0;i<n;++i) if(rev[i]>i) swap(a[i],a[rev[i]]);
    for(RI i=1;i<n;i<<=1) {
        int gn=ksm(G,(mod-1)/(i<<1));
        for(RI j=0;j<n;j+=(i<<1)) {
            int g=1,t1,t2;
            for(RI k=0;k<i;++k,g=1LL*g*gn%mod) {
                t1=a[j+k],t2=1LL*g*a[j+i+k]%mod;
                a[j+k]=(t1+t2)%mod,a[j+i+k]=(t1-t2+mod)%mod;
            }
        }
    }
    if(x==1) return;
    int inv=ksm(n,mod-2);reverse(a+1,a+n);
    for(RI i=0;i<n;++i) a[i]=1LL*a[i]*inv%mod;
}
int main()
{
	scanf("%d",&n);
	fac[0]=1;for(RI i=1;i<=n;++i) fac[i]=1LL*fac[i-1]*i%mod;
	ni[n]=ksm(fac[n],mod-2);
	for(RI i=n-1;i>=0;--i) ni[i]=1LL*ni[i+1]*(i+1)%mod;
	for(RI i=0;i<=n;++i) {
		a[i]=1LL*(1-2*(i&1)+mod)%mod*ni[i]%mod;
		if(i!=1) b[i]=1LL*(ksm(i,n+1)-1+mod)%mod*ni[i]%mod*ksm(i-1+mod,mod-2)%mod;
		else b[i]=n+1;
	}
	kn=1;while(kn<=n+n) kn<<=1,++len;
	for(RI i=0;i<kn;++i) rev[i]=(rev[i>>1]>>1)|((i&1)<<(len-1));
	NTT(a,kn,1),NTT(b,kn,1);
	for(RI i=0;i<kn;++i) a[i]=1LL*a[i]*b[i]%mod;
	NTT(a,kn,-1);
	for(RI i=0,j=1;i<=n;++i,j=(j+j)%mod)
		ans=(ans+1LL*j*fac[i]%mod*a[i]%mod)%mod;
	printf("%d\n",ans);
    return 0;
}
