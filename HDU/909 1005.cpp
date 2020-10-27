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

int prime[100010],tot,a[21],n;
bool vis[100010];
inline void solve(){
	scanf("%d",&n);
	int res=0;
	for(int i=1;i<=n;i++){
		scanf("%d",a+i);
		int sum=0;
		for(int j=1;j<=tot and prime[j]<=a[i];j++){
			if(a[i]%prime[j]==0 and j==1){
				++sum;
				while(a[i]%prime[j]==0) a[i]/=prime[j];
			}
			while(a[i]%prime[j]==0){
				++sum;
				a[i]/=prime[j];
			}
			if(a[i]==1 or (a[i]<100000 and !vis[a[i]])) break;
		}
		if(a[i]!=1) ++sum;
		res^=sum;
	}
	printf(res?"W\n":"L\n");
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	for(int i=2;i<=100000;i++){
		if(!vis[i]) prime[++tot]=i;
		for(int j=1;j<=tot and i*prime[j]<=100000;j++){
			vis[i*prime[j]]=1;
			if(i%prime[j]==0) break;
		}
	}
	//cout<<tot<<endl;
	//for(int i=1;i<=10;i++) cout<<prime[i]<<" ";cout<<endl;
	int T;for(scanf("%d",&T);T--;){
		solve();
	}
	return 0;
}


