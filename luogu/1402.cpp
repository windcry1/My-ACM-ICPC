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
}edge[210000];
int head[1010],tot=1,ori,ed;
bool book[1010];
int dep[1010];
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
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	int n,p,q;cin>>n>>p>>q;
	ed=2*n+p+q+1;
	for(int i=p+1;i<=n+p;i++){
		for(int j=1;j<=p;j++){
			bool t;cin>>t;
			if(t){
				add_edge(j,i,1);
				add_edge(i,j,0);
			}
		}
	}
	for(int i=p+1;i<=n+p;i++){
		add_edge(i,i+n,1);
		add_edge(i+n,i,0);
	}
	for(int i=n+p+1;i<=n+p+n;i++){
		for(int j=n+p+1+n;j<=n+p+q+n;j++){
			bool t;cin>>t;
			if(t){
				add_edge(i,j,1);
				add_edge(j,i,0);
			}
		}
	}
	for(int i=1;i<=p;i++) add_edge(ori,i,1),add_edge(i,ori,0);
	for(int i=n+n+p+1;i<=n+p+q+n;i++) add_edge(i,ed,1),add_edge(ed,i,0);
	cout<<dinic()<<endl;
	return 0;
}
