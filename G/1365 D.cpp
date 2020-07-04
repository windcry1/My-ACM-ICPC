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
struct node{
	int x,y;
};
int n,m;
bool vis[110][110],vis2[110][110];string s[100];
bool flag=0;
void bfs(int x,int y){
	queue<node> q;
	q.push(node{x,y});
	vis[x][y]=1;
	if(!q.empty()){
		node temp=q.front();
		q.pop();
		for(int i=0;i<4;i++){
			int dx=temp.x+dir[i][1];
			int dy=temp.y+dir[i][0];
			if(dx<n&&dy<m&&dx>=0&&dy>=0&&!vis[dx][dy]){
			//	cout<<dx<<" "<<dy<<endl;
				if(s[dx][dy]=='B'){
					for(int i=0;i<4;i++){
						int dx1=x+dir[i][1];
						int dy1=y+dir[i][0];
						if(dx1<n&&dy1<m&&dx1>=0&&dy1>=0){
							if(s[dx1][dy1]=='G') flag=1; 
							s[dx1][dy1]='#';
							vis[dx1][dy1]=1;
							q.push(node{dx1,dy1});				
						}
					}
				}
				vis[dx][dy]=1;
				q.push(node{dx,dy});
			}
		} 
	}
} 
bool bfs1(int x,int y){
	queue<node> q;
	q.push(node{x,y});
	vis2[x][y]=1;
	if(!q.empty()){
		node temp=q.front();
		q.pop();
		for(int i=0;i<4;i++){
			int dx=temp.x+dir[i][1];
			int dy=temp.y+dir[i][0];
			if(dx<n&&dy<m&&dx>=0&&dy>=0&&!vis2[dx][dy]&&s[dx][dy]!='#'){
			//	cout<<dx<<" "<<dy<<endl;
				if(dx==n-1&&dy==m-1) return 1;
				vis2[dx][dy]=1;
				q.push(node{dx,dy});
			}
		} 
	}
	return 0;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		memset(vis,0,sizeof vis);
		memset(vis2,0,sizeof vis2);
		flag=0;
		cin>>n>>m;
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		bool flag1=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(s[i][j]=='G') flag1=1;
			}
		}
		bfs(n-1,m-1);
		if(flag||(s[n-1][m-1]=='#'&&flag1)) cout<<"No"<<endl;
		else{
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					if(!vis[i][j]&&s[i][j]=='G'){
						if(!bfs1(i,j)) flag=1;
					}
				}
			}
			if(flag) cout<<"No"<<endl;
			else cout<<"Yes"<<endl;
		}
	}
    return 0;
}

