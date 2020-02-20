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
}edge[210];
int head[110],tot,n,v;
inline void add_edge(int u,int v){
	edge[++tot].to=v;
	edge[tot].next=head[u];
	head[u]=tot;
}
bool vis[110];
pii bfs(int x){
	queue<pii> q;
	memset(vis,0,sizeof vis);
	vis[x]=1;
	q.emplace(x,1);
	pii res;
	while(!q.empty()){
		pii t=q.front();q.pop();
		res=t;
		int u=t.first;
		for(int i=head[u];i;i=edge[i].next){
			if(!vis[edge[i].to]){
				vis[edge[i].to]=1;
				q.emplace(edge[i].to,t.second+1);
			}
		}
	}
	return res;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	cin>>n>>v;
	for(int i=1;i<n;i++){
		int a,b;cin>>a>>b;
		add_edge(a,b);
		add_edge(b,a);
	}
	pii pos=bfs(0);
	if(v<pos.second) cout<<v+1<<endl;
	else cout<<min((v-pos.second+1)/2+pos.second,n)<<endl;
	return 0;
}


