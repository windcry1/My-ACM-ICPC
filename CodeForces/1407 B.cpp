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
int a[1010];
bool vis[1010];
int g[1010][1010];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	for(int i=1;i<=1000;i++){
		for(int j=1;j<=1000;j++){
			g[i][j]=__gcd(i,j);
		}
	}
	int T;for(cin>>T;T--;){
		memset(vis,0,sizeof vis);
		int n;cin>>n;
		int m=-1,pos;
		for(int i=1;i<=n;i++) {
			cin>>a[i];
			if(a[i]>m){
				m=a[i];
				pos=i;
			}
		}
		vis[pos]=1;
		vector<int> res;res.push_back(a[pos]);
		int pre=a[pos];
		for(int k=1;k<n;k++){
			int m=-1,pos;
			for(int i=1;i<=n;i++){
				if(!vis[i]){
					if(g[a[i]][pre]>m){
						m=g[a[i]][pre];
						pos=i;
					}
				}
			}
			pre=__gcd(pre,a[pos]);
			vis[pos]=1;
			res.push_back(a[pos]);
		}
		for(auto i:res)cout<<i<<" ";
		cout<<endl;
	}
	return 0;
}


