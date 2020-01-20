/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/30/2019 11:03:37 PM
*************************************************************************/
//#pragma GCC optimize(3)
//#pragma GCC diagnostic error "-std=c++11"
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
#include <sstream>
#include <fstream>
#if __cplusplus >= 201103L
#include <unordered_map>
#include <unordered_set>
#endif
#define endl '\n'
#define ll long long
#define ull unsigned long long
#ifdef WindCry1
#define DEBUG(x) cout<<#x<<" : "<<x<<endl;
#endif
#define lowbit(x) x&(-x)
#define ls u<<1
#define rs u<<1|1
using namespace std;
template<typename T> inline T MIN(const T &a,const T &b) {return a<b?a:b;}
template<typename T> inline T MAX(const T &a,const T &b) {return a>b?a:b;}
template<typename T,typename ...Args> inline T MIN(const T &a,const T &b,Args ...args) {return MIN(MIN(a,b),args...);}
template<typename T,typename ...Args> inline T MAX(const T &a,const T &b,Args ...args) {return MAX(MAX(a,b),args...);}
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<double,double> pdd;
const double eps = 1e-8;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
	ll n,m,k;cin>>n>>m>>k;
	ll a[n+1],b[m+1];
	unordered_map<ll,int> cnt;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<m;i++) cin>>b[i],cnt[b[i]]++;
	sort(a,a+n);sort(b,b+m);
	auto check =[&](ll mid){
		ll res=0;
		for(int i=0;i<n;i++){
			if(a[i]>=0){
				ll tmp=mid/a[i];
				if(mid%a[i]!=0) tmp+=mid>0?1:0;
				int pos=lower_bound(b,b+m,tmp)-b;
				if(a[i]*b[pos]==mid) res+=m-pos-cnt[b[pos]];
            	else res+=m-pos;
			}
			else {
				ll tmp=mid/a[i];
           		if(mid%a[i]!=0) tmp+=mid<0?1:0;
            	int pos=lower_bound(b,b+m,tmp)-b;
            	res+=pos;
			}
		}
		return res>=k;
	};
	ll l=-INF,r=INF,mid;
	//k=n*m-k+1;
	while(l<=r){
		mid=(l+r)>>1;
		if(check(mid)) l=mid-1;
		else r=mid+1;
	}
	cout<<r+1<<endl;
	return 0;
}


