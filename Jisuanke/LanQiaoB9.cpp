/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/30/2019 11:03:37 PM
*************************************************************************/
//#pragma GCC optimize(2)
//#pragma GCC diagnostic error "-std=c++11"
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
#define endl '\n'
#define ALL(x) x.begin(),x.end()
#define MP(x,y) make_pair(x,y)
#define ll long long
#define int long long
#define ull unsigned long long
#ifdef WindCry1
#define DEBUG(x) cout<<#x<<" : "<<x<<endl;
#endif
#define lowbit(x) x&(-x)
#define ls u<<1
#define rs u<<1|1
using namespace std;
template<typename T> inline T MIN(const T &a,const T &b) {return a<b?a:b;}
template<typename T> inline T MAX(const T &a,const T &b) {return a>b?a:b;}
template<typename T,typename ...Args> inline T MIN(const T &a,const T &b,Args ...args) {return MIN(MIN(a,b),args...);}
template<typename T,typename ...Args> inline T MAX(const T &a,const T &b,Args ...args) {return MAX(MAX(a,b),args...);}
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<double,double> pdd;
const double eps = 1e-8;
const int INF = 0x3f3f3f3f3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
char a[50][50];
bool vis[50][50];
int n,m,res1,res2;
struct node{
	int x,y,step;
};
int bfs(int x,int y){
	vis[x][y]=1;
	queue<node> q;
	q.push(node{x,y,0});
	while(!q.empty()){
		node t=q.front();q.pop();
		if(a[t.x][t.y]=='E') return t.step;
		for(int i=0;i<4;i++){
			int dx=dir[i][0],dy=dir[i][1];
			if(dx>0 and dx<n and dy>0 and dy<m and !vis[dx][dy] and a[dx][dy]!='#'){
				vis[dx][dy]=1;
				q.push(node{dx,dy,t.step+1});
			}
		}
	}
}
bool check1(int x,int y,int pos){
	if(pos==0 and (y==0 or a[x][y-1]=='#')) return false;
	if(pos==1 and (y==m-1 or a[x][y+1]=='#')) return false;
	if(pos==2 and (x==n-1 or a[x+1][y]=='#')) return false;
	if(pos==3 and (x==0 or a[x-1][y]=='#')) return false;
	return true;
}
bool check2(int x,int y,int pos){
	if(pos==0 and (y==m-1 or a[x][y+1]=='#')) return false;
	if(pos==1 and (y==0 or a[x][y-1]=='#')) return false;
	if(pos==2 and (x==0 or a[x-1][y]=='#')) return false;
	if(pos==3 and (x==n-1 or a[x+1][y]=='#')) return false;
	return true;
}
int change1(int pos){
	if(pos==0) return 2;
	if(pos==1) return 3;
	if(pos==2) return 1;
	if(pos==3) return 0;
}
int change2(int pos){
	if(pos==0) return 3;
	if(pos==1) return 2;
	if(pos==2) return 0;
	if(pos==3) return 1;
}
void dfs1(int x,int y,int step,int pos){
	res1=max(res1,step);
	if(a[x][y]=='E') return ;
	if(check1(x,y,pos)) dfs1(x,y,step,change1(pos));
	else {
		int dx=x+dir[pos][0],dy=y+dir[pos][1];
		if(dx>=0 and dx<n and dy>=0 and dy<m and a[dx][dy]!='#') dfs1(dx,dy,step+1,pos);
		else dfs1(x,y,step,change2(pos));
	}
}
void dfs2(int x,int y,int step,int pos){
	res2=max(res2,step);
	if(a[x][y]=='E') return ;
	if(check2(x,y,pos)) dfs2(x,y,step,change2(pos));
	else {
		int dx=x+dir[pos][0],dy=y+dir[pos][1];
		if(dx>=0 and dx<n and dy>=0 and dy<m and a[dx][dy]!='#') dfs2(dx,dy,step+1,pos);
		else dfs2(x,y,step,change1(pos));
	}
}
signed main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	cin>>n>>m;
	int stx,sty;
	for(int i=0;i<n;i++) {
		cin>>a[i];
		for(int j=0;j<m;j++) if(a[i][j]=='S') stx=i,sty=j;
	}
	dfs2(stx,sty,0,0);
	dfs1(stx,sty,0,0);
	cout<<res1<<endl<<res2<<endl<<bfs(stx,sty)<<endl;
	return 0;
}


