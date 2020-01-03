/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/23/2019 12:48:45 AM
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
ostream& operator <<(ostream &out, pii &p){
	return out<<p.first<<" "<<p.second;
}
istream& operator >>(istream &in, pii &p){
	return in>>p.first>>p.second;
}
int a[100010],b[100010];
struct Edge{
	int to,next;
}edge[100010];
int tot,head[100010];
bool vis[100010];
int res,n,u,v,dis;
inline void add_edge(int u,int v){
	edge[++tot].to=v;
	edge[tot].next=head[u];
	head[u]=tot;
}
struct node{
	int x,step;
};
int bfs_dis(){
	vis[v]=1;
	queue<node> q;
	node t;t.x=v;t.step=0;
	q.push(t);
	while(!q.empty()){
		t=q.front();q.pop();
		if(t.x==u) return dis=t.step;
		for(int i=head[t.x];i;i=edge[i].next){
			int to=edge[i].to;
			if(!vis[to]){
				vis[to]=1;
				node temp;temp.x=to;temp.step=t.step+1;
				q.push(temp);
			}
		}
	}
	return -1;
}
int bfs_res(){
	vis[u]=1;
	queue<node> q;
	node t;t.x=u;t.step=0;
	q.push(t);
	while(!q.empty()){
		t=q.front();q.pop();
		res=max(res,t.step);
		for(int i=head[t.x];i;i=edge[i].next){
			int to=edge[i].to;
			if(!vis[to]){
				vis[to]=1;
				node temp;temp.x=to;temp.step=t.step+1;
				q.push(temp);
			}
		}
	}
	return res;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	cin>>n>>u>>v;
	for(int i=1;i<n;i++){
		int u1,v1;cin>>u1>>v1;
		add_edge(u1,v1);
		add_edge(v1,u1);
	}
	bfs_dis();
	bfs_res();
	cout<<dis<<endl;
	cout<<res<<endl;
	cout<<dis-!(res&1)<<endl;
	return 0;
}

