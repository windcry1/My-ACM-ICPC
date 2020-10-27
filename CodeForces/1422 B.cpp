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
int a[110][110];
bool vis[110][110];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	int T;for(cin>>T;T--;){
		memset(vis,0,sizeof vis);
		int n,m;cin>>n>>m;
		for(int i=1;i<=n;i++) for(int j=1;j<=m;j++) cin>>a[i][j];
		ll res=0;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++){
				if(vis[i][j]) continue;
				vector<int> temp;
				temp.push_back(a[i][j]);vis[i][j]=1;
				if(!vis[i][m+1-j]) temp.push_back(a[i][m+1-j]),vis[i][m+1-j]=1;
				if(!vis[n+1-i][j]) temp.push_back(a[n+1-i][j]),vis[n+1-i][j]=1;
				if(!vis[n+1-i][m+1-j]) temp.push_back(a[n+1-i][m+1-j]),vis[n+1-i][m+1-j]=1;
				sort(ALL(temp));
				for(auto t:temp)
					res+=abs(t-temp[temp.size()>>1]);
		}
		cout<<res<<endl;
	}
	return 0;
}


