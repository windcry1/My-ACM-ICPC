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
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
struct Edge{
	int tox,toy,next;
}edge[2000010];
int head[110][110],tot,n,a[110][110];
void add_edge(int ux,int uy,int vx,int vy){
	edge[++tot].tox=vx,edge[tot].toy=vy;
	edge[tot].next=head[ux][uy];
	head[ux][uy]=tot;
}
struct node{
	int x,y,step;
};
bool vis[110][110];
vector<pii> v;
void dfs(int x,int y){
	if(v.size()==n*n+n){
		for(auto i:v) cout<<i.first<<" "<<i.second<<endl;
		exit(0);
	}	
	for(int i=head[x][y];i;i=edge[i].next){
		auto to=MP(edge[i].tox,edge[i].toy);
		if(!vis[to.first][to.second]){
			vis[to.first][to.second]=1;
			v.emplace_back(to.first,to.second);
			dfs(to.first,to.second);
			v.pop_back();
			vis[to.first][to.second]=0;
		}
	}
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	cin>>n;
	cout<<n*n+n-1<<endl;
	for(int i=1;i<=n;i++) add_edge(1,i,1,i+1);
	for(int i=1;i<n;i++) add_edge(i,n+1,i+1,n+1);
	for(int i=2;i<=n+1;i++) add_edge(n+1,i,n+1,i-1);
	for(int i=2;i<=n;i++) add_edge(i,1,i-1,1);
	for(int i=1;i<n;i++)
		for(int j=1;j<=n;j++)
			add_edge(i,j,i+1,j+1),add_edge(i+1,j+1,i,j);
	for(int i=1;i<n;i++)
		for(int j=2;j<=n+1;j++)
			add_edge(i,j,i+1,j-1),add_edge(i+1,j-1,i,j);


	vis[1][1]=1;
	v.emplace_back(1,1);
	dfs(1,1);
	v.pop_back();
	vis[1][1]=0;
	return 0;
}


