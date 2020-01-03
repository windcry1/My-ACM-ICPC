/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/14/2019 8:28:20 PM
*************************************************************************/
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
#define ll long long
#define ull unsigned long long
#define DEBUG(x) cout<<#x<<" : "<<x<<endl;
using namespace std;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const double clf = 1e-8;
const int MMAX = 0x7fffffff;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
ostream& operator <<(ostream &out, pii &p){
	return out<<p.first<<" "<<p.second;
}
istream& operator >>(istream &in, pii &p){
	return in>>p.first>>p.second;
}
int head[200010],tot;
bool vis[200010];
set<int> st1,st2;
struct Edge{
    int to,next;
}edge[1000010];
void add_edge(int u,int v){
    edge[++tot].to = v;
    edge[tot].next = head[u];
    head[u] = tot;
}
inline void init(int n){
	for(int i=0;i<=n;i++) head[i]=0;
	tot=0;
	st1.clear();
	st2.clear();
}
int dfs1(int x){
	for(int i=head[x];i;i=edge[i].next)
		st1.insert(i);
}
int dfs2(int x){
	for(int i=head[x];i;i=edge[i].next)
		st2.insert(i);
}
inline void initvis(int n){
	for(int i=1;i<=n;i++) vis[i]=0;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	int T;cin>>T;while(T--){
		int n,m,a,b;cin>>n>>m>>a>>b;
		init(n);
		for(int i=0;i<m;i++){
			int u,v;cin>>u>>v;
			add_edge(u,v);
			add_edge(v,u);
		}
		st1.insert(b);
		st2.insert(a);
		initvis(n);
		dfs1(a);
		initvis(n);
		dfs2(b);
		//2 4
		//4 6 7
		//2
		//4
		//6 7
		set<int> inter,cha1,cha2; 
		set_intersection(st1.begin(),st1.end(),st2.begin(),st2.end(),inserter(inter,inter.begin()));
		set_difference(st1.begin(),st1.end(),inter.begin(),inter.end(),inserter(cha1,cha1.begin()));
		set_difference(st2.begin(),st2.end(),inter.begin(),inter.end(),inserter(cha2,cha2.begin()));
	}
	return 0;
}

