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
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
struct Edge{
	int to,next;
}edge[200010];
int head[100010],tot,n;
bool vis[100010];
string s;
inline void add_edge(int u,int v){
	edge[++tot].to=v;
	edge[tot].next=head[u];
	head[u]=tot;
}
ll dfs(int x){
	ll res=1;
	for(int i=head[x];i;i=edge[i].next){
		int to=edge[i].to;
		if(!vis[to] and s[to-1]=='W'){
			vis[to]=true;
			res+=dfs(to);
			vis[to]=false;
		}
	}
	return res; 
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	cin>>n>>s;
	for(int i=0;i<n-1;i++){
		int x,y;cin>>x>>y;
		add_edge(x,y);
		add_edge(y,x);
	}
	ll res=0;
	for(int i=0;i<n;i++){
		if(s[i]=='B') {
			vector<ll> v;
			ll sum=1;
			vis[i+1]=true;
			for(int j=head[i+1];j;j=edge[j].next){
				if(s[edge[j].to-1]=='W'){
					vis[edge[j].to]=true;
					ll tmp=dfs(edge[j].to);
					vis[edge[j].to]=false;
					v.push_back(tmp);
					sum+=tmp;
				}
			}
			res+=sum*(sum-1)/2;
			for(auto j:v) res-=j*(j-1)/2;
			vis[i+1]=false;
		}
	}
	cout<<res<<endl;
	return 0;
}


