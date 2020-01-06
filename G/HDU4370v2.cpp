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
}edge[100000];
int head[400],dir[400];
int t,tot=0;
bool vis[400];
void add_edge(int u,int v,int w){
	edge[++tot].to=v;
	edge[tot].val=w;
	edge[tot].next=head[u];
	head[u]=tot;
}
void spfa(int x){
	memset(vis,0,sizeof vis);
	memset(dir,INF,sizeof dir);
	queue<int> q;
	for(int i=head[x];i;i=edge[i].next){
		int to=edge[i].to;
		if(to==x) continue;
		q.push(to);
		vis[to]=1;
		dir[to]=edge[i].val;
	}
	while(!q.empty()){
		int u=q.front();q.pop();vis[u]=0;
		for(int i=head[u];i;i=edge[i].next){
			int v=edge[i].to;
			if(dir[v]>dir[u]+edge[i].val){
				dir[v]=dir[u]+edge[i].val;
				if(!vis[v]){
					vis[v]=1;
					q.push(v);
				}
			}
		}
	}
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	while(cin>>t){
	tot=0;
	memset(head,0,sizeof head);
	for(int i=1;i<=t;i++){
		for(int j=1;j<=t;j++){
			int a;cin>>a;
			add_edge(i,j,a);
			}
		}
		spfa(1);
		int m=dir[t];
		int n=dir[1];
		spfa(t);
		n+=dir[t];
		cout<<min(m,n)<<endl;
	}
    return 0;
}
