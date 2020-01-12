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
#define DEBUG(x) cout<<#x<<" : "<<x<<endl;
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
char a[22][22];
int h,w;
bool vis[22][22];
struct node{
	int x,y,step;
};
int bfs(int x,int y){
	memset(vis,0,sizeof vis);
	int res=0;
	vis[x][y]=1;
	queue<node> q;
	q.push(node{x,y,0});
	while(!q.empty()){
		node t=q.front();q.pop();
#ifdef WindCry1
	cout<<t.x<<" "<<t.y<<" "<<t.step<<endl;
#endif
		res=max(res,t.step);
		for(int i=0;i<4;i++){
			int dx=dir[i][0]+t.x,dy=dir[i][1]+t.y;
			if(dx>=1 and dx<=h and dy>=1 and dy<=w and a[dx][dy]=='.' and !vis[dx][dy]){
				q.push(node{dx,dy,t.step+1});
				vis[dx][dy]=1;
			}
		}
	}
	return res;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
	cin>>h>>w;
	for(int i=1;i<=h;i++)
		for(int j=1;j<=w;j++) cin>>a[i][j];
	int res=0;
	for(int i=1;i<=h;i++){
		for(int j=1;j<=w;j++){
			if(a[i][j]=='.') res=max(res,bfs(i,j));
		}
	}
	cout<<res<<endl;
	return 0;
}


