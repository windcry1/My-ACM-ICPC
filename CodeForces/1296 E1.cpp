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
vector<int> pos[26];
int n;string s,t;
int vis[210];
bool dfs(int x,int sum,int pre){
	if(vis[x]){
		if(!(sum&1)) return false;
	}
	bool flag=true;
	vis[x]=pre;
	for(int i=0;i<pos[s[x]-'a'].size();i++){
		if(!dfs(x,sum+1,3-pre)) return false;
	}
	return true;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	cin>>n>>s;t=s;
	sort(ALL(t));
	for(int i=0;i<n;i++){
		pos[s[i]-'a'].push_back(i);
	}
	bool ok=true;
	for(int i=0;i<n;i++){
		if(s[i]!=t[i] and !vis[i]) {
			bool tmp=dfs(i,0,1);
			if(!tmp) ok=false;
		}
	}
	if(ok){
		cout<<"YES"<<endl;
		for(int i=0;i<n;i++){
			if(vis[i]){
				cout<<vis[i]-1;
			}
			cout<<vis[i];
		}
	}
	else cout<<"NO"<<endl;
	return 0;
}


