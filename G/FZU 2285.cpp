#include <cstring>
#include <cmath>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iostream>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <complex>
#include <stack>
#include <bitset>
#include <iomanip>
#include <list>
#include <sstream>
#include <fstream>
#if __cplusplus >= 201103L
#include <unordered_map>
#include <unordered_set>
#endif
#define ll long long
#define ull unsigned long long
using namespace std;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const double clf = 1e-8;
const int MMAX = 0x7fffffff;
const int INF = 0xfffffff;
const int mod = 1e9+7;
struct node{
	int x,y,step;
};
int way[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
const int inf=0x3f3f3f3f;
int res=inf,flag=0;
char maze[1010][1010];
bool vis[1010][1010];
int n;
void bfs(int x1,int y1){
	queue<node> q;
	node now,temp,u; 
	now.x =x1;now.y =y1;now.step=0;
	vis[now.x ][now.y ]=1;
	q.push(now); 
	while(!q.empty()){
		u=q.front();q.pop() ;
		if(maze[u.x][u.y]=='E'){
			flag=1;
			res=u.step;
			return ;
		}
		for(int i=0;i<4;i++){
			temp.x =u.x +way[i][0];
			temp.y =u.y +way[i][1];
			if(temp.x>=0&&temp.x<n&&temp.y>=0&&temp.y<n&&!vis[temp.x ][temp.y ]&&maze[temp.x ][temp.y ]!='#'){
				vis[temp.x][temp.y ]=1;
				temp.step=u.step+1;
				q.push(temp);
			}
		}
	}

}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	while(cin>>n){
		memset(vis,0,sizeof vis);
		flag=0;
		for(int i=0;i<n;i++){
			cin>>maze[i];
		}
		int x1,y1;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(maze[i][j]=='S') {
					x1=i,y1=j;
				}
			}
		}
		bfs(x1,y1);
		if(flag) cout<<res<<endl;
		else cout<<-1<<endl;
	}
	return 0;
}

