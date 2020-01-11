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
char a[510][510];
bool vis[510][510];
int n,m;
int bfs(int x,int y){
	vis[x][y]=1;
	int res=0;
	queue<pii> q;
	q.emplace(x,y);
	while(!q.empty()){
		pii u=q.front();q.pop();
		if(a[u.first][u.second]=='$') res++;
		for(int i=0;i<4;i++){
			int dx=u.first+dir[i][0],dy=u.second+dir[i][1];
			if(dx>=0 and dx<n and dy>=0 and dy<m and !vis[dx][dy] and (a[dx][dy]=='$' or a[dx][dy]=='.')){
				vis[dx][dy]=1;
				q.emplace(dx,dy);
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
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>a[i];
	vector<int> res;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]=='.' or a[i][j]=='$') res.push_back(bfs(i,j));
		}
	}
	sort(res.begin(),res.end(),greater<int>());
	if(res.size()>=2u) cout<<res[0]+res[1]<<endl;
	else if(res.size()==1u) cout<<res[0]<<endl;
	else cout<<0<<endl;
	return 0;
}


