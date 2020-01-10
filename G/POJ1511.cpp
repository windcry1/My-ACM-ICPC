
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
int u1[1000010],v1[1000010],w1[1000010];
int dis[1000100];
bool vis[1000010];
int tot=0;
struct cmpx{
	bool operator () (int &a,int &b)const
	{
	return dis[a]>dis[b];
	} 
};
struct node{
    int v;
    int c;
    node(int _v=0,int _c=0):v(_v),c(_c){}
    bool operator <(const node &r)const{
        return c>r.c;
    }
};
int head[1000010];
void init(){
	memset(head,0,sizeof head);
	tot=0;
}
struct sut{
	int to,next,val;
}edge[1000010];
void add_edge(int u,int v,int w){
	edge[++tot].to=v;
	edge[tot].val=w;
	edge[tot].next=head[u];
	head[u]=tot;
}
int p,t;
void dij(int x){
	priority_queue<int,vector<int>,cmpx> q;
	for(int i=1;i<=p;i++){
		dis[i]=INF;
	}
	dis[x]=0;
	q.push(x);
	while(!q.empty()){
		int u=q.top();q.pop();
		for(int i=head[u];i;i=edge[i].next){
			int v=edge[i].to;
			if(dis[v]>dis[u]+edge[i].val){
				dis[v]=dis[u]+edge[i].val;
				q.push(v);
			}
		}
	}
}
void dij1(int x){
	for(int i=1;i<=p;i++) dis[i]=INF,vis[i]=false;
	dis[x]=0;
	priority_queue<node> q;
	q.push(node(x,dis[x]));
	while(!q.empty()){
		int u=q.top().v;q.pop();
		if(vis[u]) continue;
		vis[u]=true;
		for(int i=head[u];i;i=edge[i].next){
			int v=edge[i].to;
			if(!vis[v]&&dis[v]>dis[u]+edge[i].val){
				dis[v]=dis[u]+edge[i].val;
				q.push(node(v,dis[v]));
			}
		}
	}
}
signed main(){
	int n;scanf("%d",&n);
	while(n--){
		scanf("%d%d",&p,&t);
		for(int i=1;i<=t;i++)
			scanf("%d%d%d",u1+i,v1+i,w1+i);
		init();
		for(int i=1;i<=t;i++) add_edge(u1[i],v1[i],w1[i]);
		dij1(1);
		ll ans=0;
		for(int i=1;i<=p;i++)
			ans+=dis[i];
		init();
		for(int i=1;i<=t;i++)
			add_edge(v1[i],u1[i],w1[i]);
		dij1(1);
		for(int i=1;i<=p;i++)
			ans+=dis[i];
		printf("%lld\n",ans);
	}
    return 0;
}

