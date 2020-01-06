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
struct node{
	int to,next,val;
};
int a[310][310];
bool vis[310];
int dis[310];
int n;
void spfa(int x){
	memset(dis,INF,sizeof dis);
	memset(vis,0,sizeof vis);
	queue<int> q;
	for(int i=1;i<=n;i++)
		if(i!=x)
			q.push(i),vis[i]=1,dis[i]=a[x][i];
	while(!q.empty()){
		int u=q.front();q.pop();vis[u]=0;
		for(int j=1;j<=n;j++){
			if(dis[j]>dis[u]+a[u][j]){
				dis[j]=dis[u]+a[u][j];
				if(!vis[j]) vis[j]=1,q.push(j);
			}
		}
	}
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
	while(cin>>n){
		for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) cin>>a[i][j];
		spfa(1);
		ll t1=dis[1];
		ll t2=dis[n];
		spfa(n);
		cout<<min(t2,t1+dis[n])<<endl;
	}
	return 0;
}
