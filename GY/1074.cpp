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
struct node{
	int to,val,next;
}edge[100010];
int tot=0,n,m;
int head[1010],dir[1010],cot[1010],a[1010];
bool vis[1010],fail[1010];
const int INF=0x3f3f3f3f;
void add_edge(int u,int v,int w){
	edge[++tot].to=v;
	edge[tot].val=w;
	edge[tot].next=head[u];
	head[u]=tot;
}
void dfs(int s){
	fail[s]=1;
	for(int i=head[s];i;i=edge[i].next){
		if(!fail[edge[i].to]) {
			dfs(edge[i].to);
		} 
	}
}
void spfa(int s){
	for(int i=1;i<=n;i++){
		vis[i]=0;fail[i]=0;cot[i]=0;dir[i]=INF;
	}
	dir[s]=0;
	vis[s]=1;
	cot[s]=1;
	queue<int> q;
	q.push(s);
	while(!q.empty()){
		int u=q.front();q.pop();vis[u]=0;
		for(int i=head[u];i;i=edge[i].next){
			int v=edge[i].to;
			if(fail[v]) continue;
			if(dir[v]>dir[u]+edge[i].val){
				dir[v]=dir[u]+edge[i].val;
				if(!vis[v]){
				vis[v]=1;
				cot[v]++;
				q.push(v);
				if(cot[v]>n) dfs(v);}
			}
		}
	}
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t;int num=0;
	cin>>t;
	while(t--){
		tot=0;
		memset(head,0,sizeof head);
		num++;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		cin>>m;
		for(int i=1;i<=m;i++){
			int u,v;
			cin>>u>>v;
			add_edge(u,v,(a[v]-a[u])*(a[v]-a[u])*(a[v]-a[u]));
		}
		spfa(1);
		int q;cin>>q;
		cout<<"Case "<<num<<":"<<endl;
		while(q--) {
			int w;cin>>w;
			if(fail[w]||dir[w]<3||dir[w]==INF)
				cout<<"?"<<endl;
			else cout<<dir[w]<<endl;
		}
	}	
    return 0;
}

