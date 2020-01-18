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
bool judge(string s,ll m){
	ll res=0LL;
	for(auto c:s) res=(res*26+c-'A')%m;
	return (res==0LL?true:false);
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
	string s;ll m;cin>>s>>m;
	if(judge(s,m)) {
		cout<<"0 0"<<endl;
		return 0;
	}
	string res;
	for(int i=0;i<(int)s.size();i++){
		for(int j=1;j<(int)s.size();j++){
			swap(s[i],s[j]);
			if(judge(s,m)){
				if(res=="") res=s;
				else res=min(res,s);
			}
			swap(s[i],s[j]);
		}
	}
	if(res=="") cout<<"-1 -1"<<endl;
	else {
		bool flag=false;
		int pos;
		for(int i=0;i<res.size();i++){
			if(!flag and res[i]!=s[i]){
				pos=i;
				flag=true;
			}
			else if(flag and res[i]!=s[i]){
				cout<<pos+1<<" "<<i+1<<endl;
				return 0;
			}
		}
	}
	return 0;
}


