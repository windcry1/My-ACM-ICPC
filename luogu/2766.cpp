/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/27/2019 12:05:00 AM
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
#define ll long long
#define ull unsigned long long
#define DEBUG(x) cout<<#x<<" : "<<x<<endl;
#define lowbit(x) x&(-x)
#define ls u<<1
#define rs u<<1|1
using namespace std;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const double clf = 1e-8;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
ostream& operator <<(ostream &out, pii &p){return out<<p.first<<" "<<p.second;}
istream& operator >>(istream &in, pii &p){return in>>p.first>>p.second;}
struct Edge{
	int to,val,next;
}edge[210000];
int head[1010],tot=1,ori,ed;
bool book[1010];
int dep[1010];
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
int dfs(int x,int lim){	
	if(x==ed) return lim;
	for(int i=head[x];i;i=edge[i].next){
		int v=edge[i].to,w=edge[i].val;
		if(dep[v]==dep[x]+1&&w){
			int temp=dfs(v,min(w,lim));
			if(temp){
				edge[i].val-=temp;
				edge[i^1].val+=temp;
				return temp;
			}
		}
	}
	return 0;
}
int dinic(){
	int res=0;
	while(bfs()){
		int t=dfs(ori,INF);
		while(t){
			res+=t;
			t=dfs(ori,INF);
		}
	}
	return res;
}
int a[1010],dp[1010],m=1;
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	int n;cin>>n;ed=2*n+1;
	int cnt=0;
	for(int i=1;i<=n;i++) cin>>a[i],dp[i]=1;
	for(int i=1;i<=n;i++)
		for(int j=1;j<i;j++)
			if(a[j]<=a[i]) dp[i]=max(dp[i],dp[j]+1),m=max(m,dp[i]);
	cout<<m<<endl;
	for(int i=1;i<=n;i++){
		add_edge(i,i+n,1);
		if(dp[i]==1) add_edge(ori,i,1);
		if(dp[i]==m) add_edge(i,ed,1);
		for(int j=1;j<i;j++){
			if(a[j]<=a[i]&&dp[j]==dp[i]-1) add_edge(j+n,i,1);
		}
	}
	int ans;
	cout<<(ans=dinic())<<endl;
	if(dp[1]==1){
		add_edge(ori,1,INF);
		add_edge(1,1+n,INF);
	}
	if(dp[n]==m) {
		add_edge(2*n,ed,INF);
		add_edge(n,2*n,IN F);
	}
	memset(dep,0,sizeof dep);
	memset(book,false,sizeof book);
	cout<<ans+dinic()<<endl;
	return 0;
}
