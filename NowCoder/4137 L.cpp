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
#define ALL(x) x.begin(),x.end()
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
const int dir[8][2]={2,1,2,-1,-2,1,-2,-1,1,2,-1,2,1,-2,-1,-2};
char a[110][110];
bool vis[110][110];
int res[110][110];
int n,m;
struct node{
	int x,y,step;
};
void bfs(int stx,int sty){
	queue<node> q;
	q.push({stx,sty,0});
	vis[stx][sty]=1;
	while(!q.empty()){
		node t=q.front();q.pop();
		res[t.x][t.y]=t.step;
		for(int i=0;i<8;i++){
			int dx=t.x+dir[i][0],dy=t.y+dir[i][1];
			if(dx>=0 and dx<n and dy>=0 and dy<m and !vis[dx][dy] and a[dx][dy]=='.'){
				if(i>=0 and i<=1 and a[t.x+1][t.y]!='X'){
					vis[dx][dy]=1;
					q.push({dx,dy,t.step+1});
				}
				if(i>=2 and i<=3 and a[t.x-1][t.y]!='X'){
					vis[dx][dy]=1;
					q.push({dx,dy,t.step+1});
				}
				if(i>=4 and i<=5 and a[t.x][t.y+1]!='X'){
					vis[dx][dy]=1;
					q.push({dx,dy,t.step+1});
				}
				if(i>=6 and i<=7 and a[t.x][t.y-1]!='X'){
					vis[dx][dy]=1;
					q.push({dx,dy,t.step+1});
				}
			}
		}
	}
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	cin>>n>>m;
	int stx,sty;
	for(int i=0;i<n;i++) for(int j=0;j<m;j++) {
		cin>>a[i][j];
		if(a[i][j]=='M') stx=i,sty=j;
	}
	bfs(stx,sty);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(!vis[i][j]) cout<<-1<<" \n"[j==m-1];
			else cout<<res[i][j]<<" \n"[j==m-1];
		}
	}
	return 0;
}


