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
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
struct node{
	int x,y,step;
};
char a[510][510];
int res1[510][510];
bool vis[510][510],bad[510][510],vis2[510][510][11];
int x[55],y[55],pos[55];
int n,m,p,k;
int change(string s){
	if(s=="UP") return 0;
	if(s=="DOWN") return 1;
	if(s=="LEFT") return 2;
	if(s=="RIGHT") return 3;
}
int bfs(int stx,int sty,int edx,int edy){
	memset(vis,0,sizeof vis);
	queue<node> q;
	vis[stx][sty]=1;
	q.push(node{stx,sty,0});
	int pre=0;
	while(!q.empty()){
		node t=q.front();q.pop();
		if(t.x==edx and t.y==edy) return t.step;
		if(t.step>pre){
			if(t.step%k==0){
				for(int i=1;i<=p;i++){
					if(pos[i]==0) pos[i]=1;
					else if(pos[i]==1) pos[i]=0;
					else if(pos[i]==2) pos[i]=3;
					else if(pos[i]==3) pos[i]=2;
				}
			}
			for(int i=1;i<=p;i++){
				bad[x[i]][y[i]]=0;
				x[i]+=dir[pos[i]][0],y[i]+=dir[pos[i]][1];
				//cout<<x[i]<<" "<<y[i]<<endl;
				bad[x[i]][y[i]]=1;
			}
			pre=t.step;
		}
		if(bad[t.x][t.y]) {
			if(!vis2[t.x][t.y][t.step%k]){
				vis[t.x][t.y]=0;
				vis2[t.x][t.y][t.step%k]=1;
			}
			continue;
		}
		for(int i=0;i<4;i++){
			int dx=t.x+dir[i][0],dy=t.y+dir[i][1];
			if(dx>=1 and dx<=n and dy>=1 and dy<=m and a[dx][dy]!='&' and !vis[dx][dy]){
				vis[dx][dy]=1;
				q.push(node{dx,dy,t.step+1});
			}
		}
	}
	return -1;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	cin>>n>>m>>p>>k;
	int stx,sty,edx,edy;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			if(a[i][j]=='L') stx=i,sty=j;
			if(a[i][j]=='A') edx=i,edy=j;
		}
	for(int i=1;i<=p;i++){
		string tmp;
		cin>>x[i]>>y[i]>>tmp;
		bad[x[i]][y[i]]=1;
		pos[i]=change(tmp);
	}
	int res=bfs(stx,sty,edx,edy);
	if(res==-1) cout<<"Oh no"<<endl;
	else cout<<res<<endl;
	return 0;
}


