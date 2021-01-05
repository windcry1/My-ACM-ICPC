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
int dir[4][2]={1,0,-1,0,0,1,0,-1};
int maze[60][60];
bool vis[60][60];
int w,d,n;
struct node{
	int x,y,h;
	inline bool operator <(const node &a)const{
		return h<a.h;
	}
};
priority_queue<node> q; 
void bfs(){
	while(!q.empty()){
		node now=q.top();
		q.pop();
		maze[now.x][now.y]=now.h;
		for(int i=0;i<4;i++){
			int dx=now.x+dir[i][0];
			int dy=now.y+dir[i][1];
			if(dx>=1&&dx<=w&&dy>=1&&dy<=d&&!vis[dx][dy]){
				vis[dx][dy]=1;
				q.push(node{dx,dy,now.h-1});
			}
		}
	}
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//int w,d,n;
	cin>>w>>d>>n;
	memset(maze,0,sizeof maze);
	for(int i=1;i<=n;i++){
		int x,y,z;
		cin>>x>>y>>z;
		vis[x][y]=1;
		q.push(node{x,y,z});
	}
	//cout<<1<<endl;
	bfs();
	bool flag=0;
	int sum=0;
	for(int i=1;i<=w;i++){
		for(int j=1;j<=d;j++){
			sum+=maze[i][j];
			for(int k=0;k<4;k++){
				int dx=i+dir[k][0];
				int dy=j+dir[k][1];
				if(dx>=1&&dx<=w&&dy>=1&&dy<=d){
					if(abs(maze[dx][dy]-maze[i][j])>1) flag=1;
				}
			}
		}
	}
	if(flag) cout<<"NO"<<endl;
	else cout<<sum<<endl;
    return 0;
}

