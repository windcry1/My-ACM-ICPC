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
typedef pair<ll,ll> pll;
typedef pair<double,double> pdd;
const double eps = 1e-8;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
struct pii{
	int first;
	int second;
	int id;
	inline bool operator <(const pii &a)const{
		return first<a.first or first==a.first and second<a.second;
	}
};
pii p[100010];
vector<pii> res;
int ans[100010],t[100010];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	int n;cin>>n;
	for(int i=0;i<n;i++) cin>>p[i].first>>p[i].second,p[i].id=i;
	sort(p,p+n);
	for(int i=0;i<n;i++){
		auto pos=upper_bound(ALL(res),p[i],[](const pii &a,const pii &b){return !(a.first<b.first or a.first==b.first and a.second<b.second);});
		pos=upper_bound(pos,res.end(),p[i],[](const pii &a,const pii &b){return a.second>b.second;});
		if(pos==res.end()){
			res.push_back(p[i]);
			ans[i]=res.size();
		}
		else {
			*pos=p[i];
			ans[i]=pos-res.begin()+1;
		}
	}
	cout<<res.size()<<endl;
	for(int i=0;i<n;i++) {
		t[p[i].id]=ans[i];
	}
	for(int i=0;i<n;i++){
		cout<<t[i]<<" ";
	}
	cout<<endl;
	return 0;
}


