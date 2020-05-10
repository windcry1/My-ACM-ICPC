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
#include <numeric>
#if __cplusplus >= 201103L
#include <unordered_map>
#include <unordered_set>
#endif
#define endl '\n'
#define ALL(x) x.begin(),x.end()
#define MP(x,y) make_pair(x,y)
#define ll long long
#define ull unsigned long long
#ifdef WindCry1
#define DEBUG(x) cout<<#x<<" : "<<x<<endl;
#endif
#define lowbit(x) x&(-x)
#define ls x<<1
#define rs x<<1|1
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
const int mod = 1e8-3;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
int a[100010],b[100010],mp[100010],bit[100010],n;
void edit(int pos){
	for(;pos<=n;pos+=lowbit(pos)) bit[pos]++;
}
int query(int pos){
	int res=0;
	for(;pos;pos-=lowbit(pos)) res+=bit[pos];
	return res;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	vector<int> s;
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i],s.push_back(a[i]);
	sort(s.begin(),s.end());s.erase(unique(s.begin(),s.end()),s.end());
	for(int i=0;i<n;i++) a[i]=lower_bound(s.begin(),s.end(),a[i])-s.begin()+1;
	s.clear();
	for(int i=0;i<n;i++) cin>>b[i],s.push_back(b[i]);
	sort(s.begin(),s.end());s.erase(unique(s.begin(),s.end()),s.end());
	for(int i=0;i<n;i++) b[i]=lower_bound(s.begin(),s.end(),b[i])-s.begin()+1;
	for(int i=0;i<n;i++) mp[b[i]]=i+1;
	for(int i=0;i<n;i++) a[i]=mp[a[i]];
	int res=0;
	for(int i=0;i<n;i++){
		res=(res+i-query(a[i]))%mod;
		edit(a[i]);
	}
	cout<<res<<endl;
	return 0;
}


