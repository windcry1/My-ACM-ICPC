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
vector<int> a[200010],b[200010];
int p[200010],dis[200010];
bool vis[200010];
void bfs(int x){
	vis[x]=1;
	queue<pii> q;
	q.emplace(x,0);
	while(!q.empty()){
		auto t=q.front();q.pop();
		int u=t.first;
		dis[u]=t.second;
		for(auto to:a[u]){
			if(!vis[to]) vis[to]=1,q.emplace(to,t.second+1);
		}
	}
}
bool check(int x){
	int res=0;
	for(auto to:b[x])
		if(dis[to]+1==dis[x]) ++res;
	return res>1;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	int n,m;cin>>n>>m;
	for(int i=1;i<=m;i++){
		int u,v;cin>>u>>v;
		b[u].push_back(v);
		a[v].push_back(u);
	}
	int k; cin>>k; for(int i=1;i<=k;i++) cin>>p[i];
	bfs(p[k]);
	int res1=0,res2=0;
	for(int i=1;i<k;i++){
		if(dis[p[i+1]]+1==dis[p[i]] and check(p[i])) res2++;
		if(dis[p[i+1]]+1!=dis[p[i]]) res1++,res2++;
	}
	cout<<res1<<" "<<res2<<endl;
	return 0;
}


