/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/12/2019 2:14:36 PM
*************************************************************************/
#include<cstring>
#include<cmath>
#include<cstdio>
#include<cctype>
#include<cstdlib>
#include<ctime>
#include<vector>
#include<iostream>
#include<string>
#include<queue>
#include<set>
#include<map>
#include<algorithm>
#include<complex>
#include<stack>
#include<bitset>
#include<iomanip>
#include<list>
#if __cplusplus >= 201103L
#include<unordered_map>
#include<unordered_set>
#endif
#define ll long long
#define ull unsigned long long
using namespace std;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const ll mod=1e9+7;
ll p[500010],x[500010],a[500010];
ll sum[500010],ans[500010];
ll quick_inverse(ll n) {
	ll ret = 1;
	ll exponent = mod - 2;
	for (ll i = exponent; i; i >>= 1, n = n * n % mod) {
		if (i & 1) {
			ret = ret * n % mod;
		}
	} 
	return ret;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;cin>>T;
	while(T--)
	{
		int n,q;cin>>n>>q;
		for(int i=1;i<=n;i++) {
			ll r,s;
			cin>>r>>s>>x[i]>>a[i];
			sum[i]=(sum[i-1]+((a[i]%mod)*(quick_inverse(r)%mod)*(s%mod))%mod-sum[x[i]-1]+mod)%mod;
		}
		for(int i=1;i<=n;i++)
			ans[i]=(ans[i-1]+sum[i])%mod;
		while(q--) {
			int l,r;
			cin>>l>>r;
			cout<<(ans[r-1]-ans[l-1]+mod)%mod<<endl;
		}
	}
	return 0;
}

