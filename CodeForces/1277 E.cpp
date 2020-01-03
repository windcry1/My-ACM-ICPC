/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/17/2019 9:58:34 AM
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
	int to,next;
}edge[1000010];
int head[200010],tot,n,m,a,b;
bool vis[200010];
void add_edge(int u,int v){
	edge[++tot].to=v;
	edge[tot].next=head[u];
	head[u]=tot;
}
ll bfs(int x,int y){
	for(int i=1;i<=n;i++) vis[i]=0;
	queue<int> q;
	q.push(x);
	vis[x]=true;vis[y]=true;
	while(!q.empty()){
		int t=q.front();q.pop();
		for(int i=head[t];i;i=edge[i].next)
			if(!vis[edge[i].to]) vis[edge[i].to]=true,q.push(edge[i].to);
	}
	ll res=0;
	for(int i=1;i<=n;i++) res+=!vis[i];
	return res;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	int T;cin>>T;while(T--){
		cin>>n>>m>>a>>b;
		for(int i=1;i<=n;i++) head[i]=0;
		for(int i=0;i<m;i++){
			int u,v;cin>>u>>v;
			add_edge(u,v);
			add_edge(v,u);
		}
		cout<<bfs(a,b)*bfs(b,a)<<endl;
	}
	return 0;
}

