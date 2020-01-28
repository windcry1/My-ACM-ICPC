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
ll m;
vector<int> bit;
ll dp[11][4600];
ll dfs(const int &pos,const int &sta,const bool &limit){
	if(pos==-1) return sta<=m;
	if(sta>m) return 0;
	if(!limit and dp[pos][m-sta]!=-1) return dp[pos][m-sta]; 
	ll ans=0;
	int up=limit?bit[pos]:9;
	for(int i=0;i<=up;i++) ans+=dfs(pos-1,sta+i*(1<<pos),limit&&i==bit[pos]);
	if(!limit) return dp[pos][m-sta]=ans;
	return ans;
}
ll f(ll x){
	ll res=0,pos=0;
	while(x){
		res+=x%10*(1<<pos);
		pos++;
		x/=10;
	}
	return res;
}
void change(ll x){
	bit.clear();
	while(x){
		bit.push_back(x%10);
		x/=10;
	}
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
	memset(dp,-1,sizeof dp);
	int T;cin>>T;for(int cas=1;cas<=T;cas++){
		ll a,b;cin>>a>>b;
		m=f(a);
		change(b);
		ll res=dfs(bit.size()-1,0,true);
		cout<<"Case #"<<cas<<": "<<res<<endl;
	}
	return 0;
}


