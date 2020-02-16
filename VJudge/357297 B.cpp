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
int n,m,T;
struct node{
	int x,y,h;
	inline bool operator <(const node &a)const{
		return h<a.h;
	}
};
priority_queue<node> q;
bool vis[55][55];
int res[55][55];
void bfs(){
	while(!q.empty()){
		node t=q.top();q.pop();
		res[t.x][t.y]=t.h;
		for(int i=0;i<4;i++){
			int dx=t.x+dir[i][0],dy=t.y+dir[i][1];
			if(dx>=1 and dx<=n and dy>=1 and dy<=m and !vis[dx][dy]){
				vis[dx][dy]=1;
				q.push(node{dx,dy,t.h-1});
			}
		}
	}
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	cin>>n>>m>>T;
	for(int i=0;i<T;i++){
		int x,y,h;cin>>x>>y>>h;
		q.push(node{x,y,h});
		vis[x][y]=1;
	}
	bfs();
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			if(abs(res[i][j]-res[i-1>=1 and i-1<=n?i-1:i][j])>1 or abs(res[i][j]-res[i][j-1>=1 and j-1<=m?j-1:j])>1){
				cout<<"No"<<endl;
				return 0;
			}
	ll ans=0;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			ans+=res[i][j];
	cout<<ans<<endl;
	return 0;
}


