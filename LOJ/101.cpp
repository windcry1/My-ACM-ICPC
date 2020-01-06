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
#define DEBUG(x) cout<<#x<<" : "<<x<<endl;
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
	int to,next,val;
}edge[100010];
int head[1010],tot=1,ori,ed;
bool book[1010];
ll dep[1010];
inline void add_edge(int u,int v,int w){
	edge[++tot].to=v; edge[tot].val=w; edge[tot].next=head[u]; head[u]=tot;
	edge[++tot].to=u; edge[tot].val=0; edge[tot].next=head[v]; head[v]=tot; 
}
bool bfs(){
	memset(book,0,sizeof book);
	dep[ori]=1;book[ori]=true;
	queue<int> q;q.push(ori);
	while(!q.empty()){
		int t=q.front();q.pop();
		for(int i=head[t];i;i=edge[i].next){
			int v=edge[i].to,w=edge[i].val;
			if(w&&!book[v]){
				dep[v]=dep[t]+1;
				book[v]=true;
				q.push(v);
			}
		}
	}
	return book[ed];
}
ll dfs(int x,ll lim){	
	if(x==ed) return lim;
	for(int i=head[x];i;i=edge[i].next){
		int v=edge[i].to;ll w=edge[i].val;
		if(dep[v]==dep[x]+1&&w){
			ll temp=dfs(v,min(w,lim));
			if(temp){
				edge[i].val-=temp;
				edge[i^1].val+=temp;
				return temp;
			}
		}
	}
	return 0;
}
ll dinic(){
	ll res=0;
	while(bfs()){
		ll t=dfs(ori,INF);
		while(t){
			res+=t;
			t=dfs(ori,INF);
		}
	}
	return res;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
	int n,m;cin>>n>>m>>ori>>ed;
	for(int i=0;i<m;i++){
		int u,v,w;cin>>u>>v>>w;add_edge(u,v,w);
	}
	cout<<dinic()<<endl;
	return 0;
}


