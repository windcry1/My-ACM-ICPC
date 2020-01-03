/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/30/2019 11:03:37 PM
*************************************************************************/
//#pragma GCC optimize(3)//ACWing, CCF
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

int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
	int T;cin>>T;while(T--){
		string s;cin>>s;
		int flag=0;
		if(s.size()>=1){
			if(s.end()[-1]=='x'||s.end()[-1]=='s'||s.end()[-1]=='o') flag=1;
			if(s.end()[-1]=='f') flag=2;
			if(s.end()[-1]=='y') flag=3;
		}
		if(s.size()>=2){
			if(s.end()[-1]=='h'&&s.end()[-2]=='c') flag=1;
			if(s.end()[-1]=='e'&&s.end()[-2]=='f') flag=2;
		}
		if(flag==0) cout<<s<<"s"<<endl;
		if(flag==1) cout<<s<<"es"<<endl;
		if(flag==2) {
			if(s.end()[-1]=='e') s.pop_back();
			s.pop_back();
			cout<<s<<"ves"<<endl;
		}
		if(flag==3) s.pop_back(),cout<<s<<"ies"<<endl;
	}
	return 0;
}


