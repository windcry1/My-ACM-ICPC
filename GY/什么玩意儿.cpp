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
int dir[4][2]={0,1,0,-1,1,0,-1,0};
string maze[1010];
bool vis[1010][1010];
int dp[1010][1010];
int ans[1010];
int n,m;
int dfs(int x,int y,int p){
	if(dp[x][y]!=-1) return dp[x][y];
	vis[x][y]=1;
	int res=-1;
	for(int i=0;i<4;i++){
		int dx=x+dir[i][0],dy=y+dir[i][1];
		if(dx>=0 and dx<n and dy>=0 and dy<n and maze[dx][dy]!=maze[x][y] and dp[dx][dy]!=-1)
			res=max(res,dfs(dx,dy));
	}
	return dp[x][y]=res+1;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	cin>>n>>m;
	memset(dp,-1,sizeof dp);
	for(int i=0;i<n;i++) cin>>maze[i];
	while(m--){
		memset(vis,0,sizeof vis);
		int x,y;
		cin>>x>>y;
		x--,y--;
		cout<<dfs(x,y,i)<<endl;
	}
    return 0;
}

