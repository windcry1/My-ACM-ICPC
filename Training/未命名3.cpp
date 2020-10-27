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
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
const int N = 5e5 + 5;
int a[N], b[N], tr[N], vis[N], n, m, p; vector<int> lsh;
vector<int> vec[N], del[N], wuhu[N];
void add(int x, int v){
	for(int i = x ; i <= m ; i += lowbit(i))
		tr[i] += v;
}
int query(int x){
	int res = 0;
	for(int i = x ; i ; i -= lowbit(i)) res += tr[i];
	return res;
}
signed main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	int T; cin >> T;
	for(int cas = 1 ; cas <= T ; cas ++){
		cin >> n >> p; lsh.clear();
		for(int i = 1 ; i <= n ; i ++){
			cin >> b[i] >> a[i];
			lsh.push_back(a[i]);
			lsh.push_back(b[i]);
		}
		sort(lsh.begin(), lsh.end());
		lsh.erase(unique(lsh.begin(), lsh.end()), lsh.end());
		m = lsh.size();
		for(int i = 1 ; i <= m ; i ++) 
			vec[i].clear(), del[i].clear(), wuhu[i].clear(), tr[i] = vis[i] = 0;
		for(int i = 1 ; i <= n ; i ++){
			auto x = lower_bound(lsh.begin(), lsh.end(), a[i]) - lsh.begin() + 1;
			auto y = lower_bound(lsh.begin(), lsh.end(), b[i]) - lsh.begin() + 1;
			vec[x].push_back(x);
			vec[y].push_back(y);
			del[y].push_back(x);
			wuhu[x].push_back(i);
		}
		int idx = m + 1, cnt = 0;
		for(int i = 1 ; i <= m ; i ++){
			for(auto &x : wuhu[i]){
				if(!vis[x]) vis[x] = 1, cnt ++;
				if(cnt == n){ idx = i; break; }
			}
			if(idx != m + 1) break;
			for(auto &x : vec[i]) add(x,  1);
			for(auto &x : del[i]) add(x, -1);
		}
		int ans = 0;
		for(int i = idx ; i <= m ; i ++){
			for(auto &x : vec[i]) add(x,  1);
			for(auto &x : del[i]) add(x, -1);
			int l = ceil(1.0 * lsh[i - 1] * p / 100.0);
			l = lower_bound(lsh.begin(), lsh.end(), l) - lsh.begin() + 1;
			ans = max(ans, query(i) - query(l - 1));
		}
		cout << "Case #" << cas << ": " << ans << endl;
	}
	return 0;
}


