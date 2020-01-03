/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 9/14/2019 3:44:27 PM
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
const ll mod = 1e9+7;
ll a[110],b[110];
ll suf[110];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;cin>>T;
	while(T--){
		int k,n;cin>>k>>n;
		for(int i=1;i<=k;i++)cin>>a[i],a[i]%=mod;
		for(int i=1;i<=k;i++)cin>>b[i],b[i]%=mod,suf[i]=(suf[i-1]+b[i])%mod;
		ll res=0;
		bool f=false;
		for(int i=1;i<=k;i++){
			res+=a[i],res%=mod;
			n--;
			if(n==0){
				f=true;
				cout<<res<<endl;
				break;
			}
		}
		if(f) continue;
		for(int i=1;i<=k;i++){
			res+=b[i],res%=mod;
			n--;
			if(n==0){
				f=true;
				cout<<res<<endl;
				break;
			}
		}
		if(f) continue;
		res+=n*b[k];
		cout<<res%mod<<endl;
	}
	return 0;
}

