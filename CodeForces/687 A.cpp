/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/25/2019 11:46:25 PM
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
#define lowbit(x) x&(-x)
#define ls u<<1
#define rs u<<1|1
using namespace std;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const double clf = 1e-8;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
ostream& operator <<(ostream &out, pii &p){return out<<p.first<<" "<<p.second;}
istream& operator >>(istream &in, pii &p){return in>>p.first>>p.second;}
vector<int> a[100010];
vector<int> p[3];
int color[100010];
bool dfs(int v,int c){
	if(a[v].empty()) return 1;
	color[v]=c;
	for(auto i:a[v]){
		if(!color[i]&&!dfs(i,3-c)) return 0;
		if(color[i]!=3-c) return 0;
	}
	return 1;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//ifstream cin("C:\\Users\\LENOVO\\Desktop\\in.txt");
	//ofstream cout("C:\\Users\\LENOVO\\Desktop\\out.txt");
	int n,m;cin>>n>>m;
	for(int i=1;i<=m;i++){
		int u,v;cin>>u>>v;
		a[u].push_back(v);
		a[v].push_back(u);
	}
	for(int i=1;i<=n;i++){
		if(color[i]) continue;
		if(!dfs(i,1)){
			cout<<-1<<endl;
			return 0;
		}
	}
	for(int i=1;i<=n;i++) p[color[i]].push_back(i);
	cout<<p[1].size()<<endl;
	for(auto i:p[1]) cout<<i<<" ";cout<<endl;
	cout<<p[2].size()<<endl;
	for(auto i:p[2]) cout<<i<<" ";cout<<endl;
	return 0;
}

