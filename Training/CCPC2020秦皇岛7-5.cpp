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
vector<int> v[300010];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	int T;cin>>T;for(int cas=1;cas<=T;cas++){
		queue<int> q;
		int n,m;cin>>n>>m;
		for(int i=0;i<=n;i++) v[i].clear();
		int du[m+10]={0};
		for(int i=1,t1,t2;i<=m;i++) cin>>t1>>t2,v[t1].push_back(t2),v[t2].push_back(t1),du[t1]++,du[t2]++;
		for(int i=1;i<=n;i++){
			if(du[i]==1) q.push(i);
		}
		int res=m;
		while(q.size()){
			int u=q.front();q.pop();du[u]--;
			for(int i:v[u]){
				if(du[i]>0){
					res--;
					du[i]--;
					if(du[i]==1) q.push(i);
				}
			}
		}
		cout<<"Case #"<<cas<<": "<<max(res-n,0)<<endl;
	}
	return 0;
}


