/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/30/2019 11:03:37 PM
*************************************************************************/
//#pragma GCC optimize(2)
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
#include <numeric>
#if __cplusplus >= 201103L
#include <unordered_map>
#include <unordered_set>
#endif
#define endl '\n'
#define ALL(x) x.begin(),x.end()
#define MP(x,y) make_pair(x,y)
#define ll long long
#define int long long
#define ull unsigned long long
#ifdef WindCry1
#define DEBUG(x) cout<<#x<<" : "<<x<<endl;
#endif
#define lowbit(x) x&(-x)
#define ls x<<1
#define rs x<<1|1
using namespace std;
template<typename T> inline T MIN(const T &a,const T &b) {return a<b?a:b;}
template<typename T> inline T MAX(const T &a,const T &b) {return a>b?a:b;}
template<typename T,typename ...Args> inline T MIN(const T &a,const T &b,Args ...args) {return MIN(MIN(a,b),args...);}
template<typename T,typename ...Args> inline T MAX(const T &a,const T &b,Args ...args) {return MAX(MAX(a,b),args...);}
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<double,double> pdd;
const double eps = 1e-8;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
ll solve(ll pos,ll n){
	vector<int> res;
	n--;
	while(n){
		res.push_back(n%4);
		n/=4;
	}
	while((int)res.size()<pos) res.push_back(0);
	for(int i=0;i<(int)res.size();i++) {
		if(res[i]==0) res[i]=0;
		else if(res[i]==1) res[i]=2;
		else if(res[i]==2) res[i]=3;
		else if(res[i]==3) res[i]=1;
	}
	ll t=0;
	for(int i=0;i<(int)res.size();i++){
		t+=(1LL<<(i<<1))*res[i];
	}
	pos=pos*2+1;
	return (1LL<<pos)+t;
}
signed main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	int T;cin>>T;while(T--){
		ll n;cin>>n;
		if(n%3==1){
			n=n/3+1;
			ll cnt=0;
			for(int i=0;i<=62;i+=2){
				cnt+=(1LL<<i);
				if(cnt>=n){
					cnt-=(1LL<<i);
					n-=cnt;
					cout<<(1LL<<i)+n-1<<endl;
					break;
				}
			}
		}
		else if(n%3==2){
			n=n/3+1;
			ll cnt=0;
			for(int i=0;i<=62;i+=2){
				cnt+=(1LL<<i);
				if(cnt>=n){
					cnt-=(1LL<<i);
					n-=cnt;
					cout<<solve(i>>1,n)<<endl;
					break;
				}
			}
		}
		else{
			ll t1,t2;
			n=n/3;
			ll tmp=n;
			ll cnt=0;
			for(int i=0;i<=62;i+=2){
				cnt+=(1LL<<i);
				if(cnt>=tmp){
					cnt-=(1LL<<i);
					tmp-=cnt;
					t1=(1LL<<i)+tmp-1;
					break;
				}
			}
			cnt=0;
			for(int i=0;i<=62;i+=2){
				cnt+=(1LL<<i);
				if(cnt>=n){
					cnt-=(1LL<<i);
					n-=cnt;
					t2=solve(i>>1,n);
					break;
				}
			}
			cout<<(t1^t2)<<endl;
		}
	}
	return 0;
}


