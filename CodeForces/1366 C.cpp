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
#include <numeric>
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
#define ls x<<1
#define rs x<<1|1
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
const int dir[4][2]={0,1,1,0,0,-1,-1,0};
bool a[32][32];
bool vis[32][32];
vector<bool> path1[1010],path2[1010];
int n,m;
struct node{
	int x,y,step;
	node(int x,int y,int step):x(x),y(y),step(step){};
};
void bfs1(){
	queue<node> q;
	q.emplace(1,1,0);
	memset(vis,0,sizeof vis);
	for(int i=0;i<1010;i++) path1[i].clear();
	path1[0].push_back(a[1][1]);
	while(!q.empty()){
		auto t=q.front();q.pop();
		for(int i=0;i<2;i++){
			int dx=t.x+dir[i][0],dy=t.y+dir[i][1];
			if(dx>=1 and dx<=n and dy>=1 and dy<=m and !vis[dx][dy]){
				path1[t.step+1].push_back(a[dx][dy]);
				q.emplace(dx,dy,t.step+1);
				vis[dx][dy]=1;
			}
		}
	}
}
void bfs2(){
	queue<node> q;
	q.emplace(n,m,0);
	memset(vis,0,sizeof vis);
	for(int i=0;i<1010;i++) path2[i].clear();
	path2[0].push_back(a[n][m]);
	while(!q.empty()){
		auto t=q.front();q.pop();
		for(int i=2;i<4;i++){
			int dx=t.x+dir[i][0],dy=t.y+dir[i][1];
			if(dx>=1 and dx<=n and dy>=1 and dy<=m and !vis[dx][dy]){
				path2[t.step+1].push_back(a[dx][dy]);
				q.emplace(dx,dy,t.step+1);
				vis[dx][dy]=1;
			}
		}
	}
} 
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	int T;cin>>T;while(T--){
		cin>>n>>m;
		for(int i=1;i<=n;i++) for(int j=1;j<=m;j++) cin>>a[i][j];
		bfs1();
		bfs2();
		int res=0;
		for(int i=0;i<1010;i++){
			if((n+m)%2==0 and i==(n+m-2)/2) continue;
			int cnt[2][2]={0};
			for(auto j:path1[i]) cnt[0][j]++;
			for(auto j:path2[i]) cnt[1][j]++;
			res+=min(cnt[0][0]+cnt[1][0],cnt[1][1]+cnt[0][1]);
		}
		cout<<res/2<<endl;
	}
	return 0;
}


