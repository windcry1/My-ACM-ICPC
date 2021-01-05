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
char maze[3][15][15]; 
int m,n,ti;
int way[4][2]={1,0,-1,0,0,1,0,-1};
bool vis[3][15][15];
int inf = 0x3f3f3f3f;
struct node{
	int z1,y1,x1,step;
};
queue<node> q;
int bfs(int z,int y,int x){
	while(!q.empty()) q.pop();
	node now;now.x1=0;now.y1=0;now.z1=0;now.step=0;
	q.push(now);
	vis[now.z1][now.y1][now.x1]=1;
	while(!q.empty()){
		node u=q.front();q.pop();
		if(u.step<=ti&&u.x1==x&&u.y1==y&&u.z1==z) return 1;
		if(u.step>ti) return -1; 
		for(int i=0;i<4;i++){
			node temp;
			temp.x1=u.x1+way[i][0];
			temp.y1=u.y1+way[i][1];	
			temp.z1=u.z1; 
			if(temp.x1>=0&&temp.y1>=0&&temp.x1<n&&temp.y1<m&&!vis[temp.z1][temp.y1][temp.x1]&&(maze[temp.z1][temp.y1][temp.x1]=='.'||maze[temp.z1][temp.y1][temp.x1]=='P')){
				temp.step=u.step+1;
				vis[temp.z1][temp.y1][temp.x1]=1;
				q.push(temp);
			}
			if(temp.x1>=0&&temp.y1>=0&&temp.x1<n&&temp.y1<m&&!vis[temp.z1][temp.y1][temp.x1]&&maze[temp.z1][temp.y1][temp.x1]=='#'&&maze[1-temp.z1][temp.y1][temp.x1]!='*'&&maze[1-temp.z1][temp.y1][temp.x1]!='#'){
				temp.step=u.step+1;
				temp.z1=1-temp.z1;
				vis[temp.z1][temp.y1][temp.x1]=1;
				q.push(temp);
			}
		}
	} 
	return -1;
}
int main(){
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
		memset(vis,0,sizeof vis); 
		int x,y,z;
		cin>>m>>n>>ti;
		for(int k=0;k<2;k++){
			for(int i=0;i<m;i++){
		 		for(int j=0;j<n;j++){
		 		cin>>maze[k][i][j];
					if(maze[k][i][j]=='P'){
		 				 z=k,y=i,x=j;
					}
				}
			}
		}
		cout<<(bfs(z,y,x)==1?"YES":"NO")<<endl;
	}
    return 0;
}
