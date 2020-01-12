/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/30/2019 11:03:37 PM
*************************************************************************/
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
#define int long long
using namespace std;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const double eps = 1e-8;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
struct Edge{
	int to,next,val;
}edge[200010];
int head[100010],tot,cnt,n,m;
vector<int> v[100010];
inline void add_edge(int u,int v,int w){
	edge[++tot].to=v; edge[tot].val=w; edge[tot].next=head[u]; head[u]=tot;
}
void dfs(int u){
	if(u==n) return ;
	for(int i=head[u];i;i=edge[i].next){
		v[cnt].push_back(edge[i].val);
		dfs(edge[i].to);
	}
}
map<int,int> cost;
signed main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
	cin>>n>>m;
	int flow=0;
	for(int i=1;i<=m;i++){
		int u,v,w;cin>>u>>v>>w;
		add_edge(u,v,w);
		flow+=w;
	}
	for(int i=head[1];i;i=edge[i].next){
		v[cnt].push_back(edge[i].val);
		dfs(edge[i].to);
		sort(v[cnt].begin(),v[cnt].end());
		++cnt;
	}
	flow/=(ll)v[0].size();
#ifdef WindCry1
	for(int i=0;i<cnt;i++){
		for(auto j:v[i]) cout<<j<<" ";cout<<endl;
	}
	DEBUG(flow);
#endif
	for(int i=0;i<cnt;i++){
		for(int j=0;j<(int)v[i].size();j++)
			if(j>0) cost[j]+=v[i][j]-v[i][j-1];
			else cost[j]+=v[i][j];
	}
	int res=0;
#ifdef WindCry1
	for(auto i:cost) cout<<i.first<<" : "<<i.second<<endl;
	DEBUG(flow);
#endif
	for(auto i:cost){
		if(flow<=i.second) {
			res+=flow*i.first;
			break;
		}
		res+=i.first*i.second;
		flow-=i.second;
	}
	cout<<res<<endl;
	return 0;
}


