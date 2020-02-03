/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/30/2019 11:03:37 PM
*************************************************************************/
//#pragma GCC optimize(3)
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
char a[1010][1010];
map<pii,pii> mp;
bool flag[1010][1010],vis[1010][1010];
int n,m;
struct node{
	int x,y,step;
	node(int _,int __,int ___):x(_),y(__),step(___){ }
};
int bfs(int x1,int y1,int x2,int y2){
	vis[x1][y1]=1;
	queue<node> q;
	q.push(node(x1,y1,0));
	while(!q.empty()){
		node t=q.front();q.pop();
		if(t.x==x2 and t.y==y2) return t.step;
		for(int i=0;i<4;i++){
			int dx=t.x+dir[i][0],dy=t.y+dir[i][1];
			if(dx>=1 and dx<=n and dy>=1 and dy<=m and !vis[dx][dy] and a[dx][dy]=='.'){
				if(flag[dx][dy]) {
					while(flag[dx][dy] and !vis[dx][dy] and a[dx][dy]=='.') {
						vis[dx][dy]=1;
						pii temp=mp[make_pair(dx,dy)];
						dx=temp.first;
						dy=temp.second;
					}
					if(!vis[dx][dy] and a[dx][dy]=='.'){
						vis[dx][dy]=1;
						q.push(node(dx,dy,t.step+1));
					}
				}
				else{
					vis[dx][dy]=1;
					q.push(node(dx,dy,t.step+1));
				}
			}
		}
	}
	return -1;
} 
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin>>a[i][j];
	int q;cin>>q;
	while(q--){
		int u1,v1,u2,v2;cin>>u1>>v1>>u2>>v2;
		flag[u1][v1]=true;
		mp[make_pair(u1,v1)]=make_pair(u2,v2);
	}
	int x,y;cin>>x>>y;
	int res=bfs(1,1,x,y);
	if(res==-1) cout<<"No solution"<<endl;
	else cout<<res<<endl;
	return 0;
}
