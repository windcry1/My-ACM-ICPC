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
#define int long long
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
const int N=77;
pll a[N];
int g[N][N];
ll d(pll a,pll b){
	return abs(a.first-b.first)+abs(a.second-b.second);
}
pll bad(1e18,1e18);
signed main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
	int x0,y0,ax,ay,bx,by;
	for(int i=0;i<N;i++){
		a[i]={1e18,1e18};
	}
	cin>>a[1].first>>a[1].second>>ax>>ay>>bx>>by;
	int t;
	cin>>a[0].first>>a[0].second>>t;
	int z=2;
	for(int i=2;i<N;i++){
		a[i]={a[i-1].first*ax+bx,a[i-1].second*ay+by};
		++z;
		cout<<a[i].first<<" "<<a[i].second<<endl;
		if(a[i].first>8e16 or a[i].second>8e16) break;
	}
	for(int i=0;i<z;i++){
		for(int j=0;j<z;j++){
			g[i][j]=d(a[i],a[j]);
		}
	}
	int ans=0;
	vector<int>used(N);
	int now=0;
	while(1){
		pll mx={1e18,1e18};
		used[now]=1;
		for(int i=0;i<z;i++){
			if(!used[i]){
				if(g[now][i]<mx.first)
					mx={g[now][i],i};
			}
		}
		t-=mx.first;
		now=mx.second;
		if(t<0) break;
		if(mx==bad) break;
		++ans;
	}
	cout<<ans<<endl;
	return 0;
}


