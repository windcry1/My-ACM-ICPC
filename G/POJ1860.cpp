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
int head[1010],cnt[1010];
double dir[1010];
bool vis[1010];
struct sut{
	int to,next;
	double r,c;
}edge[20010];
int tot=0;
void add_edge(int u,int v,double r,double c){
	edge[++tot].to=v;
	edge[tot].c=c;
	edge[tot].r=r;
	edge[tot].next=head[u];
	head[u]=tot;
}
int n,m,s;double w;
int spfa(int x){
	for(int i=1;i<=n;i++){
		vis[i]=0;dir[i]=0;cnt[i]=0;
	}
	dir[x]=w;vis[x]=1;cnt[x]=1;
	queue<int> q;
	q.push(x);
	while(!q.empty()){
		int u=q.front();q.pop();vis[u]=0;
		for(int i=head[u];i;i=edge[i].next){
			int v=edge[i].to;
			if(dir[v]<(dir[u]-edge[i].c)*edge[i].r){
				dir[v]=(dir[u]-edge[i].c)*edge[i].r;
				if(!vis[v]){
					vis[v]=1;
					q.push(v);
					++cnt[v];
					if(cnt[v]>n) return 1;
				}
			}
		}
	}
	return 0;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	while(cin>>n>>m>>s>>w){
		memset(head,0,sizeof head);
		tot=0;
		for(int i=1;i<=m;i++){
			int u,v;
			double r1,c1,r2,c2;
			cin>>u>>v>>r1>>c1>>r2>>c2;
			add_edge(u,v,r1,c1);
			add_edge(v,u,r2,c2);
		}
		cout<<(spfa(s)?"YES":"NO")<<endl;
	}
    return 0;
}

