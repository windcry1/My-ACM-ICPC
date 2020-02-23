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
#if __cplusplus >= 201103L
#include <unordered_map>
#include <unordered_set>
#endif
#define endl '\n'
#define ALL(x) x.begin(),x.end()
#define MP(x,y) make_pair(x,y)
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
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
map<ll,int>mp;
int T,m,vis[70],cnt[70];
const int N=1e6+10;
ll n,a[N],pri[N];
void init() {
	pri[0]=1;
	mp[pri[0]]=0;
	for(int i=1;; i++) {
		pri[i]=pri[i-1]*2;
		if(pri[i]>1e9)break;
		mp[pri[i]]=i;
	}
}
int main() {
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	init();
	cin>>T;
	while(T--) {
		memset(vis,0,sizeof(vis));
		memset(cnt,0,sizeof(cnt));
		cin>>n>>m;
		ll sum=0;
		for(int i=1; i<=m; i++) {
			cin>>a[i];
			cnt[mp[a[i]]]++;
			sum+=a[i];
		}
		if(sum<n)cout<<-1<<endl;
		else {
			int pos=-1;
			while(n>0) {
				pos++;
				if(n%2==1) {
					if(cnt[pos]>0)cnt[pos]--;
					else vis[pos]=1;
				}
				n/=2;
			}
			int ans=0;
			for(int i=0; i<=pos; i++) {
				if(vis[i]) {
					if(cnt[i]>0) {
						cnt[i]--;
						cnt[i+1]+=cnt[i]/2;
					} else {
						for(int j=i+1; j<70; j++) {
							if(cnt[j]>0) {
								cnt[j]--;
								ans+=j-i;
								for(int k=i; k<=j-1; k++)cnt[k]++;
								vis[i]=0;
								break;
							}
						}
					}
				} else	cnt[i+1]+=cnt[i]/2;
			}
			cout<<ans<<endl;
		}
	}
	return 0;
}

