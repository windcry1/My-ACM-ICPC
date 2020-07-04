#pragma GCC optimize("-Ofast","-funroll-all-loops")
#include<bits/stdc++.h>
//#define int long long
using namespace std;
const int N=55;
const int dx[]={0,1,0,-1},dy[]={1,0,-1,0};
int n,m,cg,cb,vis[N][N],s,cnt; char g[N][N],tmp[N][N];
int bfs(){
	queue<pair<int,int> > q; memset(vis,0,sizeof vis); 
	s=cnt=0; if(g[n][m]!='#')	q.push({n,m}),vis[n][m]=1; 
	while(q.size()){
		auto u=q.front();	q.pop();
		if(g[u.first][u.second]=='G')	s++;
		if(g[u.first][u.second]=='B')	cnt++;
		for(int i=0;i<4;i++){
			int tx=u.first+dx[i],ty=u.second+dy[i];
			if(tx>=1&&ty>=1&&tx<=n&&ty<=m&&!vis[tx][ty]&&g[tx][ty]!='#')
				vis[tx][ty]=1,q.push({tx,ty});
		}
	}
	return s;
}
inline void solve(){
	cin>>n>>m;	cg=cb=0;
	for(int i=1;i<=n;i++)	scanf("%s",g[i]+1);
	for(int i=1;i<=n;i++)	for(int j=1;j<=m;j++)
		if(g[i][j]=='G')	cg++;
		else if(g[i][j]=='B')	cb++;
	bfs();
	for(int i=1;i<=n;i++)	for(int j=1;j<=m;j++)	tmp[i][j]=g[i][j];
	for(int i=1;i<=n;i++)	for(int j=1;j<=m;j++)	if(tmp[i][j]=='B'&&vis[i][j]){
		g[i][j]='#';
		for(int k=0;k<4;k++){
			int tx=i+dx[k],ty=j+dy[k];
			g[tx][ty]='#';
		}
	}
	bfs();
	puts(cnt||s!=cg?"No":"Yes");
}
signed main(){
	int T;	cin>>T;	while(T--) solve();
	return 0;
}

