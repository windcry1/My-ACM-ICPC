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
int n,m;
char a[1010][1010];
bool vis[1010][1010];
int way[8][2]={-1,1,0,1,1,1,1,0,1,-1,0,-1,-1,-1,-1,0};
struct node{
	int x,y;
};
void bfs(int x,int y){
	queue<node> q;
	node now,u,temp;
	now.x=x,now.y=y;
	q.push(now);vis[now.x][now.y]=1;
	while(!q.empty()){
		u=q.front();q.pop();
		if(a[u.x][u.y]=='.') continue;
		for(int i=0;i<8;i++){
			temp.x=u.x+way[i][0];
			temp.y=u.y+way[i][1];
			if(temp.x>1&&temp.x>1&&temp.x<=n&&temp.y<=m&&!vis[temp.x][temp.y]&&a[temp.x][temp.y]=='W'){
				vis[temp.x][temp.y]=1;
				q.push(temp);
			}
		}
	}
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>n>>m;
	int res=0;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin>>a[i][j];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			if(!vis[i][j]&&a[i][j]=='W'){
			cout<<i<<" "<<j<<endl;
			bfs(i,j);
			res++;	
		}
	cout<<res<<endl;
    return 0;
}

