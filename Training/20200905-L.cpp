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
int t[2010],d[2010];
struct node{
	int t,i,d;
};
priority_queue<pii> q;
queue<node> ret;
vector<int> res[2010];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	int m,n,w,h;cin>>m>>n>>w>>h;
	for(int i=1;i<=m;i++) cin>>t[i],q.push(MP(t[i]/w,i));
	for(int i=1;i<=n;i++) cin>>d[i];
	bool ok=true;
	for(int i=1;i<=n;i++){
		while(!ret.empty()){
			node t=ret.front();
			if(t.d==i){
				q.push(MP(t.t,t.i));
				ret.pop();
			}
			else break;
		}
		while(d[i]){
			if(q.empty()){
				ok=false;break;
			}
			pii t=q.top();q.pop();
			if(t.first>1)
				ret.push(node{t.first-1,t.second,i+w+h});
			for(int j=i;j<=i+w-1;j++) {
				d[j]--;
				if(j>n) {
					ok=false;
					break;
				}
			}
			res[t.second].push_back(i);
			if(!ok) break;
		}
		if(!ok) break;
	}
	for(int i=1;i<=n;i++) if(d[i]) ok=false;
	if(!q.empty()) ok=false;
	if(!ok){
		cout<<-1<<endl;
		return 0;
	}
	cout<<1<<endl;
	for(int i=1;i<=m;i++){
		for(auto j:res[i]) cout<<j<<" ";
		cout<<endl;
	}
	return 0;
}


