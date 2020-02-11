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
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
string s;
vector<int> res;
bool isprime(int x){
	for(int i=2;i<=sqrt(x);i++)
		if(x%i==0) return false;
	return true;
}
bool check(string s){
	if(s=="") return false;
	string t=s;
	reverse(ALL(t));
	int tmp=stoll(s);
	return isprime(tmp) and s[0]!='0' and t==s;
}
void dfs(int len){
	if(len==9) return ;
	if(check(s)) res.push_back(stoll(s));
	for(int i=0;i<=9;i++){
		string ori=s;
		s=to_string(i)+s+to_string(i);
		dfs(len+2);
		s=ori;
	}
}
void dfs2(int len){
	if(len==8) return ;
	if(check(s)) res.push_back(stoll(s));
	for(int i=0;i<=9;i++){
		string ori=s;
		s=to_string(i)+s+to_string(i);
		dfs2(len+2);
		s=ori;
	}
}
signed main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	int a,b;cin>>a>>b;
	for(int i=0;i<=9;i++){
		s=to_string(i);
		dfs(1);
	}
	s="";
	dfs2(0);
	sort(ALL(res));
	for(auto i=lower_bound(ALL(res),a),t=upper_bound(ALL(res),b);i<t;i++){
		cout<<*i<<endl;
	}
	return 0;
}


