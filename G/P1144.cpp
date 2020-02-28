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
	int to,val,next;
}edge[4000100];
int tot=0;
int head[1000010],dis[1000010],ans[1000010];
bool vis[1000010];
void add_edge(int u,int v,int w){
	edge[++tot].to=v;
	edge[tot].val=w;
	edge[tot].next=head[u];
	head[u]=tot;
}
int n,m;
queue<int> q;
void spfa(int x){
	for(int i=1;i<=n;i++){
		dis[i]=INF;vis[i]=0;ans[i]=0;
	}
	dis[x]=0;
	vis[x]=1;
	ans[x]=1;
	q.push(x);
	while(!q.empty()){
		int u=q.front();q.pop();vis[u]=0;
		for(int i=head[u];i;i=edge[i].next){
			int v=edge[i].to;
			if(dis[v]>dis[u]+edge[i].val){
				dis[v]=dis[u]+edge[i].val;
				ans[v]=ans[u];
				if(!vis[v]){
				vis[v]=1;
				q.push(v);}
			}
			else if(dis[v]==dis[u]+edge[i].val){
				ans[v]=(ans[u]+ans[v])%100003;
			}
		}
	}
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//	int n,m;
	cin>>n>>m;
	while(m--){
		int a,b;
		cin>>a>>b;
		add_edge(a,b,1);
		add_edge(b,a,1);
	}
	spfa(1);
	int mmin=INF;
	for(int i=1;i<=n;i++){
		cout<<ans[i]<<endl;
	}
    return 0;
}

