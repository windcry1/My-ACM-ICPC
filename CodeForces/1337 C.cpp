#pragma GCC optimize("-Ofast","-funroll-all-loops")
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int n,k,dep[N],a[N],vis[N],dp[N],sz[N],mark[N],num,res;
vector<int> g[N]; 
struct node{int x,s;};
bool operator < (node a,node b){return a.s<b.s;}
void dfs(int x,int fa){
	dep[x]=dep[fa]+1;	sz[x]=1;
	for(auto to:g[x])	if(to!=fa)	dfs(to,x),sz[x]+=sz[to];
}
void dfs1(int x,int fa){
	if(!vis[x])	dp[x]=1;
	for(auto to:g[x])	if(to!=fa){
		dfs1(to,x);		dp[x]+=dp[to];
	}
	if(vis[x])	res+=dp[x];
}
signed main(){
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	cin>>n>>k;
	for(int i=1,a,b;i<n;i++)	
		scanf("%lld %lld",&a,&b),g[a].push_back(b),g[b].push_back(a);
	dfs(1,1);	num=n-k;
	priority_queue<node> q;	q.push({1,n}); mark[1]=1;
	while(num--){
		node u=q.top();	q.pop(); vis[u.x]=1;
		for(auto to:g[u.x])	if(!mark[to]) q.push({to,sz[to]}),mark[to]=1;
	}
	dfs1(1,1);
	cout<<res;
	return 0;
}

