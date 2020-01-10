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
int m,n;
struct sut{
	int to,next,val;
}edge[200000];
int head[30010],tot=0,dis[30010]; 
void add_edge(int u,int v,int w){
	edge[++tot].to=v;
	edge[tot].val=w;
	edge[tot].next=head[u];
	head[u]=tot;
}
bool vis[31000];
void dij(int x){
	for(int i=1;i<=m;i++)
		dis[i]=INF,vis[i]=false;
	dis[x]=0;
	priority_queue<pair<int,int> > q;	
	q.push(make_pair(0,x));
	while(!q.empty()){
		int u=q.top().second;q.pop();
		if(vis[u]) continue;
		vis[u]=true;
		for(int i=head[u];i;i=edge[i].next){
			int v=edge[i].to;
			if(dis[v]>dis[u]+edge[i].val){
				dis[v]=dis[u]+edge[i].val;
				q.push(make_pair(-dis[v],v));
			}
		}
	}
}
int main(){
	//ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	scanf("%d%d",&m,&n);
	for(int i=1;i<=n;i++){
		int u,v,w;
		scanf("%d%d%d",&u,&v,&w);
		add_edge(u,v,w);
	}
	dij(1);
	printf("%d\n",dis[m]);
    return 0;
}

