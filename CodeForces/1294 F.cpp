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
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
struct Edge{
	int next,to;
}edge[400010];
int head[200010],tot;
bool vis[200010],vis1[200010];
int fa[200010];
inline void add_edge(int u,int v){
	edge[++tot].to=v; edge[tot].next=head[u]; head[u]=tot;
}
pii bfs(int x){
	memset(vis,0,sizeof vis);
	vis[x]=1;
	queue<pii> q;
	pii res(0,0);
	q.push(make_pair(x,0));
	while(!q.empty()){
		pii t=q.front();q.pop();
		if(t.second>res.second){
			res=t;
		}
		int u=t.first;
		for(int i=head[u];i;i=edge[i].next){
			if(!vis[edge[i].to] and !vis1[edge[i].to]){
				vis[edge[i].to]=1;
				q.push(make_pair(edge[i].to,t.second+1));
				fa[edge[i].to]=u;
			}
		}
	}
	return res;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in1.txt","r",stdin);
#endif
	int n;cin>>n;
	for(int i=1;i<n;i++){
		int u,v; cin>>u>>v;
		add_edge(u,v);
		add_edge(v,u);
	}
	pii res1=bfs(1);
	memset(fa,0,sizeof fa);
	pii res2=bfs(res1.first);
	vector<int> path;
	for(int i=res2.first;i;i=fa[i]){
		vis1[i]=true;
		path.push_back(i);
	}
	pii res(0,0);
	for(int i=0;i<(int)path.size();i++){
		pii t=bfs(path[i]);
		if(t.second>res.second){
			res=t;
		}
	}
	if(res.first==0){
		res.first=path[1];
	}
	cout<<res2.second+res.second<<endl;
	cout<<res1.first<<" "<<res2.first<<" "<<res.first<<endl;
	return 0;
}


