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
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
int dis[410][410];
ll dp[100010];
struct node{
	int p,t,val;
	bool operator <(const node &a) const{
		return t<a.t;
	}
}a[100010];
signed main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++) for(int j=1;j<=n;j++)dis[i][j]=(i==j?0:INF);
	for(int i=0,u,v;i<m;i++)
		cin>>u>>v,dis[u][v]=dis[v][u]=1;
	for(int k=1;k<=n;k++)
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				dis[i][j]=min(dis[i][k]+dis[k][j],dis[i][j]);
	int q;cin>>q;
	for(int i=1;i<=q;i++) cin>>a[i].t>>a[i].p>>a[i].val;
	sort(a+1,a+1+q);
	a[0].p=1;dp[0]=0; 
	ll now=0;
	for(int i=1;i<=q;i++){
		if(i>200){
			now=max(now,dp[i-200]);
			dp[i]=a[i].val+now;
		}
		else dp[i]=-INF;
		for(int j=1;j<=min(200LL,i);j++)
			if(a[i].t-a[i-j].t>=dis[a[i].p][a[i-j].p])
				dp[i]=max(dp[i],dp[i-j]+a[i].val);
	}
	cout<<*max_element(dp,dp+1+q)<<endl;
	return 0;
}


