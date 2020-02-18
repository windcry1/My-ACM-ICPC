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
struct Edge{
	int to,next;
}edge[400010];
int head[200010],tot,n,m,k,a[200010],dis1[200010],dis2[200010],vis[200010];
inline void add_edge(int u,int v){
	edge[++tot].to=v; edge[tot].next=head[u]; head[u]=tot;
}
void bfs(int x,int *dis){
	memset(vis,false,sizeof vis);
	dis[x]=0;
	queue<pii> q;
	vis[x]=true;
	q.emplace(x,0);
	while(!q.empty()){
		pii t=q.front();q.pop();
		dis[t.first]=t.second;
		int u=t.first;
		for(int i=head[u];i;i=edge[i].next){
			int to=edge[i].to;
			if(!vis[to]) q.emplace(to,t.second+1),vis[to]=true;
		}
	}
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	cin>>n>>m>>k;
	for(int i=1;i<=k;i++) cin>>a[i];
	for(int i=0;i<m;i++){
		int u,v;cin>>u>>v;
		add_edge(u,v);
		add_edge(v,u);
	}
	memset(dis1,-1,sizeof dis1);
	memset(dis2,-1,sizeof dis2); 
	bfs(1,dis1);
	bfs(n,dis2);
	sort(a+1,a+1+k,[](const int &u,const int &v){return dis1[u]<dis1[v] or (dis1[u]==dis1[v] and dis2[u]>dis2[v]);});
	int ans=0,tmp=-INF;
	for(int i=1;i<=k;i++){
		ans=max(ans,dis2[a[i]]+1+tmp);
		tmp=max(tmp,dis1[a[i]]);
	}
	cout<<min(ans,dis1[n])<<endl;
	return 0;
}


