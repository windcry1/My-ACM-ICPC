#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
const int N=1010;
const int MAX_N=20010;
int d[N][N],vis[N][N];
int tot,head[MAX_N],nex[MAX_N],to[MAX_N],w[MAX_N];
int n,p,k;
void add(int a,int b,int c){
	w[++tot]=c; to[tot]=b; nex[tot]=head[a]; head[a]=tot;
}
void spfa(){
	queue<pair<int,int> > q;q.push({1,0});
	memset(d,0x3f,sizeof d); d[1][0]=0;
	vis[1][0]=1;
	while(q.size()){
		int u1=q.front().first;
		int u2=q.front().second;
		q.pop();	vis[u1][u2]=0;
		for(int i=head[u1];i;i=nex[i]){
			int v=to[i];	int val=w[i];
			if(d[v][u2]>max(d[u1][u2],val)){
				d[v][u2]=max(d[u1][u2],val);
				if(!vis[v][u2])
					vis[v][u2]=1,q.push({v,u2});
			}
			if(u2<k&&d[v][u2+1]>d[u1][u2]){
				d[v][u2+1]=d[u1][u2];
				if(!vis[v][u2+1])
					vis[v][u2+1]=1,q.push({v,u2+1});
			}
		}
	} 
}
int main(){
	cin>>n>>p>>k;
	while(p--)
	{
		int a,b,val;
		cin>>a>>b>>val;
		add(a,b,val);
		add(b,a,val);
	}
	spfa();
	int ans=INF;
	for(int i=0;i<=k;i++)
		ans=min(ans,d[n][i]);
	cout<<(ans==INF?-1:ans)<<endl;
	return 0;
}
