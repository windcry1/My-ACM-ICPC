/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 2021/1/6 16:01:45
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
	int T;for(cin>>T;T--;){
		int n;cin>>n;
		vector<pii> v[n];
		map<pii,int> all;
		for(int i=0;i<n;i++){
			int m;cin>>m;
			for(int j=0;j<m;j++){
				int t1,t2;cin>>t1>>t2;
				v[i].push_back(MP(t1,t2));
			}
		}
		int res=0;
		for(int i=0;i<n;i++){
			map<pii,int> last;
			for(auto j:v[i]){
				last[j]++;
			}
			for(auto j:all){
				if(last.count(j.first))
					last[j.first]+=j.second;
			}
			all=last;
			for(auto j:last) res=max(res,j.second);
		}
		cout<<res<<endl;
	}
	return 0;
}


