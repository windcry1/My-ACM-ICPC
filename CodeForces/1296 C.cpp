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
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	int T;cin>>T;while(T--){
		int n;string s;cin>>n>>s;
		pii tmp;
		map<pii,int> mp;
		int res=INF,l=0,r=0;
		mp[make_pair(0,0)]=1;
		for(int i=0;i<n;i++){
			if(s[i]=='L') tmp=make_pair(tmp.first,tmp.second-1);
			if(s[i]=='R') tmp=make_pair(tmp.first,tmp.second+1);
			if(s[i]=='U') tmp=make_pair(tmp.first-1,tmp.second);
			if(s[i]=='D') tmp=make_pair(tmp.first+1,tmp.second);
			if(mp.count(tmp)){
				if(res>i+1-(mp[tmp])){
					l=mp[tmp],r=i+1;
					res=i+1-(mp[tmp]);
				}
			}
			mp[tmp]=i+2;
		}
		if(res==INF) cout<<-1<<endl;
		else cout<<l<<" "<<r<<endl;
	}
	return 0;
}


