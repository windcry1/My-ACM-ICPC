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
#include<set>
#include<vector>
#include<iomanip>
#include<bitset>
#include<algorithm>
#define ll long long
using namespace std;
const int inf=0x7fffffff;
int m,n;
char a[110][110];
int way[4][2]={-1,0,1,0,0,1,0,-1};
int vis[110][110];
struct node{
	int x,y,step;
};
int bfs(int x1,int y1,int x2,int y2){
	queue<node> q;
	node now;vis[x1][y1]=1;
	now.x=x1;now.y=y1;now.step=-1;
	q.push(now);
	while(!q.empty()){
		node u=q.front();
		q.pop();
		if(u.x==x2&&u.y==y2) return u.step;
		for(int i=0;i<4;i++){
			int dx=u.x+way[i][0];
			int dy=u.y+way[i][1];
			while(dy>=0&&dx>=0&&dy<n&&dx<m&&a[dx][dy]=='.') {
				if(!vis[dx][dy]){
					vis[dx][dy]=1;
					node temp;temp.x=dx;temp.y=dy;temp.step=u.step+1;
					q.push(temp);
				}
				dx+=way[i][0];
				dy+=way[i][1];
			}
		}
	}
	return inf;
}
int main(){
	ios::sync_with_stdio(false);
	int t;cin>>t;
	while(t--){
		memset(vis,0,sizeof vis); 
		cin>>m>>n;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		int k,x1,y1,x2,y2;
		cin>>k>>x1>>y1>>x2>>y2;
		int res=bfs(y1-1,x1-1,y2-1,x2-1);
		cout<<(res<=k?"yes":"no")<<endl; 
	}
    return 0;
}

