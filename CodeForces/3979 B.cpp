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
int x[1010],y[1010];
string s[1010];
char change(char a,char b){
	int t1,t2;
	if(isupper(a)) t1=a-'A'+26;
	else if(islower(a)) t1=a-'a';
	if(isupper(b)) t2=b-'A'+26;
	else if(islower(b)) t2=b-'a';
	int res=(t1-t2+52)%52;
	if(res>=0 and res<26) return res+'a';
	else return res+'A'-26;
}
void secert(string &a,string &b){
	string t(a);
	while(t.size()<b.size()) t+=t;
	for(int i=0;i<(int)b.size();i++){
		b[i]=change(b[i],t[i]);
	}
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
	int n,m;cin>>n>>m;
	for(int i=1;i<=m;i++) cin>>x[i]>>y[i];
	for(int i=1;i<=n;i++) cin>>s[i];
	for(int i=m;i>=1;i--){
		secert(s[x[i]],s[y[i]]);
	}
	for(int i=1;i<=n;i++){
		cout<<s[i]<<endl;
	}
	return 0;
}


