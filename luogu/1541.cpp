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
int cnt[5];
int dp[50][50][50][50];
int a[360];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1,t;i<=m;i++) cin>>t,cnt[t]++;
	dp[0][0][0][0]=a[1];
	for(int i=0;i<=cnt[1];i++){
		for(int j=0;j<=cnt[2];j++){
			for(int k=0;k<=cnt[3];k++){
				for(int l=0;l<=cnt[4];l++){
					int to=i+j*2+k*3+l*4;
					if(i!=0) dp[i][j][k][l]=max(dp[i][j][k][l],dp[i-1][j][k][l]+a[to+1]);
					if(j!=0) dp[i][j][k][l]=max(dp[i][j][k][l],dp[i][j-1][k][l]+a[to+1]);
					if(k!=0) dp[i][j][k][l]=max(dp[i][j][k][l],dp[i][j][k-1][l]+a[to+1]);
					if(l!=0) dp[i][j][k][l]=max(dp[i][j][k][l],dp[i][j][k][l-1]+a[to+1]);
				}
			}
		}
	}
	cout<<dp[cnt[1]][cnt[2]][cnt[3]][cnt[4]]<<endl;
	return 0;
}


