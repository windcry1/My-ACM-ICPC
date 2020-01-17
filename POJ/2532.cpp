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
struct Edge{
	int to,next;
	double val;
}edge[100010];
pii p[420];
int head[420],tot,cnt;
inline void add_edge(int u,int v,double w){
	edge[++tot].to=v; edge[tot].val=w; edge[tot].next=head[u]; head[u]=tot;
}
inline double cal_dis(pii a,pii b){
	return sqrt((a.first-b.first)*(a.first-b.first)+(a.second-b.second)*(a.second-b.second));
}
bool vis[420];
double dis[420];
void dij(int x){
	for(int i=1;i<=cnt;i++) dis[i]=INF,vis[i]=false;
	dis[x]=0;
	priority_queue<pair<double,int> > q;	
	q.push(make_pair(-dis[x],x));
	while(!q.empty()){
		int u=q.top().second; q.pop();
		if(vis[u]) continue;
		vis[u]=true;
		for(int i=head[u];i;i=edge[i].next){
			int v=edge[i].to;
			if(!vis[v]&&dis[v]>dis[u]+edge[i].val){
				dis[v]=dis[u]+edge[i].val;
				q.push(make_pair(-dis[v],v));
			}
		}
	}
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
	cin>>p[1].first>>p[1].second>>p[2].first>>p[2].second;
	cnt=3;
	bool flag=0;
	int t1,t2;
	while(cin>>t1>>t2){
		if(t1==-1 and t2==-1){
			flag=0;
			continue;
		}
		p[cnt].first=t1,p[cnt].second=t2;
		if(!flag){
			flag=1;
			++cnt;
			continue;
		}
		else {
			add_edge(cnt-1,cnt,cal_dis(p[cnt],p[cnt-1])*3/2000);
			add_edge(cnt,cnt-1,cal_dis(p[cnt],p[cnt-1])*3/2000);
			++cnt;
		}
	}
	for(int i=1;i<cnt;i++)
		for(int j=1;j<cnt;j++)
			if(i!=j) add_edge(i,j,cal_dis(p[i],p[j])*3/500);
	dij(1);
	cout<<(int)(dis[2]+0.5)<<endl;
	return 0;
}


