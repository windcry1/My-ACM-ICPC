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
const int mod = 100003;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
struct node{
	int to,next;
}edge[4000010];
int head[1000010],tot,n,m;
inline void add_edge(int u,int v){
	edge[++tot].to=v;
	edge[tot].next=head[u];
	head[u]=tot;
}
bool vis[1000010];
int dis[1000010];
int res[1000010];
void bfs(int x){
	memset(vis,0,sizeof vis);
	memset(dis,INF,sizeof dis);
	dis[x]=0;
	vis[x]=1;
	res[x]=1;
	queue<pii> q;
	q.emplace(x,0);
	while(!q.empty()){
		pii t=q.front();q.pop();
		for(int i=head[t.first];i;i=edge[i].next){
			int to=edge[i].to;
			if(!vis[to]){
				q.emplace(to,t.second+1);
				vis[to]=1;
				dis[to]=t.second+1;
				res[to]=(res[to]+res[t.first])%mod;
				continue;
			}
			if(dis[to]==t.second+1) res[to]=(res[t.first]+res[to])%mod;
		}
	}
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int u,v;cin>>u>>v;
		add_edge(u,v);
		add_edge(v,u);
	}
	bfs(1);
	for(int i=1;i<=n;i++) cout<<res[i]<<endl;
	return 0;
}


