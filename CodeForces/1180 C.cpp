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
#include <deque>
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
int a[100010];
vector<pii> res;
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
	int n,q;cin>>n>>q;
	deque<int> dq;
	pii temp;
	for(int i=1;i<=n;i++) cin>>a[i],dq.push_back(a[i]);
	int pos=max_element(a+1,a+n+1)-a-1;
	for(int i=0;i<pos+n-1;i++){
		int t1=dq.front();dq.pop_front();
		int t2=dq.front();dq.pop_front();
		res.emplace_back(t1,t2);
		if(t1>t2){
			dq.push_front(t1);
			dq.push_back(t2);
		}
		else{
			dq.push_front(t2);
			dq.push_back(t1);
		}
	}
	while(q--){
		ll t;cin>>t;
		t--;
		if(t>=pos) cout<<res[(t-pos)%((int)res.size()-pos)+pos].first<<" "<<res[(t-pos)%((int)res.size()-pos)+pos].second<<endl;
		else cout<<res[t].first<<" "<<res[t].second<<endl;
	}
	return 0;
}


