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
int a[510][510],b[510][510];
bool vis[510];
int fa[510];
struct Edge{
	int to,dis,from;
	inline bool operator <(const Edge &x) const{
		return dis<x.dis;
	}
}edge[1000010];
int find(int x){return fa[x]==x?x:find(fa[x]);}
int tot;
signed main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	int n;cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++) cin>>a[i][j];
	for(int i=1;i<=n;i++) fa[i]=i;
	vector<Edge> res;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			edge[++tot].from=i,edge[tot].to=j,edge[tot].dis=a[i][j];
	sort(edge+1,edge+tot+1);
	for(int i=1;i<=tot;i++){
		if((int)res.size()==n-1) break;
		if(find(edge[i].from)!=find(edge[i].to)){
			fa[find(edge[i].to)]=find(edge[i].from);
			res.push_back(edge[i]);
		}
	}
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(i!=j) b[i][j]=INF;
	for(auto i:res) b[i.to][i.from]=b[i.from][i.to]=i.dis;
	for(int k=1;k<=n;k++)
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				b[i][j]=min(b[i][j],b[i][k]+b[k][j]);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(b[i][j]!=a[i][j]){
				cout<<"No"<<endl;
				return 0;
			}
		}
	}
	cout<<"Yes"<<endl;
	sort(ALL(res));
	for(auto i:res) cout<<i.dis<<endl;
	return 0;
}

