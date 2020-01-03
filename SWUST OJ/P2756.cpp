/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/20/2019 7:09:38 PM
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
const int MMAX = 0x7fffffff;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
ostream& operator <<(ostream &out, pii &p){
	return out<<p.first<<" "<<p.second;
}
istream& operator >>(istream &in, pii &p){
	return in>>p.first>>p.second;
}
struct Edge{
	int to,val,next;
}edge[100010];
int head[110],tot,n,m,ori,ed;
bool book[110];
int h[110],dep[110];
map<int,int> mpa,mpb;
inline void add_edge(int u,int v,int w){
	edge[++tot].to=v;
	edge[tot].val=w;
	edge[tot].next=head[u];
	head[u]=tot;
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
				if(x!=ori&&v!=ed)
					mpa[x]=v,mpb[v]=x;
				return temp;
			}
		}
	}
	return 0;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	cin>>n>>m;ed=n+1;
	int u,v;while(cin>>u>>v){
		if(u==-1&&v==-1) break;
		add_edge(u,v,1);
		add_edge(v,u,0);
	}
	for(int i=1;i<=m;i++) add_edge(ori,i,1),add_edge(i,ori,0);
	for(int i=m+1;i<=n;i++) add_edge(i,ed,1),add_edge(ed,i,0);
	int res=0;
	while(bfs()){
		int t=dfs(ori,INF);
		while(t){
			res+=t;
			t=dfs(ori,INF);
		}
	}
	cout<<res<<endl;
	for(auto i:mpa) cout<<i.first<<" : "<<i.second<<endl;
	for(auto i:mpb) cout<<i.first<<" : "<<i.second<<endl;
	for(int i=1;i<=m;i++){
		if(i==mpb[mpa[i]]) cout<<i<<" "<<mpa[i]<<endl;
		else if(i==mpa[mpb[i]]) cout<<i<<" "<<mpb[i]<<endl;
	}
	return 0;
}

