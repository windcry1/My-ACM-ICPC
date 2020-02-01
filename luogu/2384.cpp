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
#define ALL(x) x.begin(),x.end()
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
const int mod = 9987;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
struct node{
	int to,next,val;
}edge[2000010];
int head[1010],tot,n,m;
inline void add_edge(int u,int v,int w){
	edge[++tot].to=v; edge[tot].val=w; edge[tot].next=head[u]; head[u]=tot;
}
int dis[1010];
bool vis[1010];
void dijkstra(){
	memset(dis,INF,sizeof dis); 
	dis[1]=1;
	priority_queue<pii> q;
	q.push(make_pair(-dis[1],1));
	while(!q.empty()){
		pii t=q.top();q.pop();
		int u=t.second;
		if(vis[u]) continue; vis[u]=true;
		for(int i=head[u];i;i=edge[i].next){
			int to=edge[i].to;
			if(vis[to]) continue;
			if(dis[to]>dis[u]*edge[i].val){
				dis[to]=dis[u]*edge[i].val%mod;
				if(dis[to]==0) dis[to]=1;
				q.push(make_pair(-dis[to],to));
			}
		}
	}
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int u,v,w;cin>>u>>v>>w;
		add_edge(u,v,w);
		add_edge(v,u,w);
	}
	dijkstra();
	cout<<dis[n]<<endl;
	return 0;
}


