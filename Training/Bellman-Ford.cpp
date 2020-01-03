/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/3/2019 11:00:14 PM
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
struct node{
	int u,v,w;
}edge[20010];
int dis[110],cnt,n,m;
void Bellman_Ford(int x){
	for(int i=1;i<=n;i++)
		dis[i]=(i==x?0:INF);
	for(int i=2;i<=n;i++){
		for(int j=0;j<2*m;j++){
			dis[edge[j].u]=min(dis[edge[j].v]+edge[j].w,dis[edge[j].u]);
		}
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	while(cin>>n>>m){
		if(!n&&!m) break;
		for(int i=0;i<m;i++){
			cin>>edge[i].u>>edge[i].v>>edge[i].w;
			edge[i+m].u=edge[i].v;
			edge[i+m].v=edge[i].u;
			edge[i+m].w=edge[i].w;
		}
		Bellman_Ford(1);
		cout<<dis[n]<<endl;
	}
	return 0;
}

