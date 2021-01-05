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
#include<bitset>
#include<algorithm>
#define ll long long
using namespace std;
int a[1010],c[1010];
int b [1010][1010];
int dis[1010],vis[1010];
bool fail[1010];
int n,m;
const int INF=0x3f3f3f3f;
void dfs(int s){
	fail[s]=1;
	for(int i=1;i<=n;i++){
		if(b[s][i]!=INF&&!fail[i]) dfs(i);
	}
}
void spfa(int d){
	memset(vis,0,sizeof vis);
	memset(c,0,sizeof c);
	queue<int> q;
	for(int i=1;i<=n;i++){
		vis[i]=0;
		dis[i]=INF;
	}
	dis[d]=0;
	vis[d]=1;
	q.push(d);
	while(!q.empty()){
		int u=q.front();q.pop();
		vis[u]=0;
		for(int i=1;i<=n;i++){
			if(fail[i]||b[u][i]==INF) continue;
				if(dis[i]>dis[u]+b[u][i]){
					dis[i]=dis[u]+b[u][i];
					if(!vis[i]){
						c[i]++;
						vis[i]=1;
						q.push(i);
						if(c[i]>n) dfs(i);
					}
				}
					
			}
		}
	}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t;cin>>t;
	int cot=0;
	while(t--){
		cot++;
		memset(b,INF,sizeof b);
		memset(fail,0,sizeof fail);
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		cin>>m;
		for(int i=1;i<=m;i++){
			int u,v;
			cin>>u>>v;
			b[u][v]=(a[v]-a[u])*(a[v]-a[u])*(a[v]-a[u]);
		}
		int k;cin>>k;
		spfa(1);
		for(int i=1;i<=k;i++){
			int w;
			cin>>w;
			if(i==1) cout<<"Case "<<cot<<":"<<endl;
			if(fail[w]||dis[w]<3||dis[w]==INF)
				cout<<"?"<<endl;
			else cout<<dis[w]<<endl;
		}
	}	
    return 0;
}

