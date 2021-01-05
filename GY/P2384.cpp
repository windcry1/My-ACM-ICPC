#include<cstdio>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<cctype>
#include<ctime>
#include<iostream>
#include<string>
#include<map>
#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<iomanip>
#include<list>
#include<bitset>
#include<sstream>
#include<fstream>
#include<complex>
#include<algorithm>
#if __cplusplus >= 201103L
#include <unordered_map>
#include <unordered_set>
#endif
#define ll long long
using namespace std;
const int INF = 0x3f3f3f3f;
struct sut{
	int to,next,value;
}edge[2000010];
bool vis[1010]; 
int head[1010],dir[1010];
int tot=0;
void add_edge(int u,int v,int w){
	edge[++tot].to=v;
	edge[tot].value=w;
	edge[tot].next=head[u];
	head[u]=tot; 
}
int n,m;
void dij(int x){
	for(int i=1;i<=n;i++) dir[i]=INF,vis[i]=0;
	priority_queue<pair<int,int>> q;
	dir[x]=1;
	q.push(make_pair(-dir[x],x));
	while(!q.empty()){
		pair<int,int> now=q.top();q.pop();
		int u=now.second;
		if(vis[u]) continue;
		vis[u]=1;
		for(int i=head[u];i;i=edge[i].next){
			int v=edge[i].to;
			if(dir[v]>dir[u]*edge[i].value&&!vis[v]){
				dir[v]=(dir[u]%9987*(edge[i].value%9987))%9987;
				if(dir[v]==0) dir[v]=1;
				q.push(make_pair(-dir[v],v));
			}
		}
	}
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int u,v,w;
		cin>>u>>v>>w;
		w%=9987;
		add_edge(u,v,w);
	}
	dij(1);
	//for(int i=1;i<=n;i++) cout<<dir[i]<<" "<<i<<endl;
	cout<<(dir[n]==0?1:dir[n])<<endl;
    return 0;
}

