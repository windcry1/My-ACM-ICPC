/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/31/2019 3:00:13 PM
*************************************************************************/
#include <cstring>
#include <cmath>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iostream>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <complex>
#include <stack>
#include <bitset>
#include <iomanip>
#include <list>
#if __cplusplus >= 201103L
#include <unordered_map>
#include <unordered_set>
#endif
#define ll long long
#define ull unsigned long long
using namespace std;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const double clf = 1e-8;
const int MMAX = 0x7fffffff;
const int INF = 0xfffffff;
//const int mod = 1e9+7;
int T,n,k,mod;
ll a[55];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;cin>>T;
	for(int times=1;times<=T;times++){
		cin>>n>>k>>mod;
		if(k>=n){
			ll res=1;
			for(int i=1;i<=n;i++) res=1LL*res*i%mod;
			cout<<"Case #"<<times<<": "<<res<<endl;
			continue;
		}
		a[0]=1;
        for (int i=1;i<=n;++i) a[i]=1LL*a[i-1]*(k+1)%mod;
        ll res=0;
        res=a[n-k];
        for (int i=2;i<=n-k;i++) 
            res+=1LL*(n-k-i+1)*a[n-k-1]%mod,res%=mod;
        for (int i=3;i<=n-k;i++)res+=1LL*(n-k-i+1)*a[n-k-i+1]%mod,res%=mod;
        for (int i=1;i<=k;++i) res=1LL*res*i%mod;
        cout<<"Case #"<<times<<": "<<res<<endl;
	}
	return 0;
}

