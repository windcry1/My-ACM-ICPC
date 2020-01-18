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
struct Edge{
	int to,next;
	ll val;
}edge1[300010],edge2[300010];
int tot1,tot2,head1[20010],head2[20010],n,m;
inline void add_edge(int u,int v,ll w){
	edge1[++tot1].to=v; edge1[tot1].val=w; edge1[tot1].next=head1[u]; head1[u]=tot1;
	edge2[++tot2].to=u; edge2[tot2].val=w; edge2[tot2].next=head2[v]; head2[v]=tot2;
}
ll dis[20010];
bool vis[20010];
void dij1(int x){
	for(int i=1;i<=n;i++) dis[i]=INF,vis[i]=false;
	dis[x]=0;
	priority_queue<pair<int,int> > q;	
	q.push(make_pair(-dis[x],x));
	while(!q.empty()){
		int u=q.top().second; q.pop();
		if(vis[u]) continue;
		vis[u]=true;
		for(int i=head1[u];i;i=edge1[i].next){
			int v=edge1[i].to;
			if(!vis[v]&&dis[v]>dis[u]+edge1[i].val){
				dis[v]=dis[u]+edge1[i].val;
				q.push(make_pair(-dis[v],v));
			}
		}
	}
}
void dij2(int x){
	for(int i=1;i<=n;i++) dis[i]=INF,vis[i]=false;
	dis[x]=0;
	priority_queue<pair<int,int> > q;	
	q.push(make_pair(-dis[x],x));
	while(!q.empty()){
		int u=q.top().second; q.pop();
		if(vis[u]) continue;
		vis[u]=true;
		for(int i=head2[u];i;i=edge2[i].next){
			int v=edge2[i].to;
			if(!vis[v]&&dis[v]>dis[u]+edge2[i].val){
				dis[v]=dis[u]+edge2[i].val;
				q.push(make_pair(-dis[v],v));
			}
		}
	}
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
	int T;cin>>T;
	while(T--){
		tot1=0,tot2=0;
		memset(head1,0,sizeof head1);
		memset(head2,0,sizeof head2);
		cin>>n>>m;
		for(int i=1;i<=m;i++){
			int u,v;ll w;cin>>u>>v>>w;
			add_edge(u,v,w);
		}
		dij1(1);
		ll res=0;
		for(int i=2;i<=n;i++) res+=dis[i];
		dij2(1);
		for(int i=2;i<=n;i++) res+=dis[i];
		cout<<res<<endl;
	}
	return 0;
}


