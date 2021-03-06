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
#include <sstream>
#include <fstream>
#if __cplusplus >= 201103L
#include <unordered_map>
#include <unordered_set>
#endif
#define endl '\n'
#define ALL(x) x.begin(),x.end()
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
const int mod = 19650827;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
int dp[1010][1010][2];
int a[1010];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
	int n;cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) dp[i][i][0]=1;
	for(int len=2;len<=n;len++){
		for(int l=1;l+len-1<=n;l++){
			int r=l+len-1;
			if(a[l]<a[l+1]) dp[l][r][0]=(dp[l][r][0]+dp[l+1][r][0])%mod;//Last number insert from the front,which is a[l+1], and a[l] < a[l+1], then a[l] can be inserted to the seqment[l+1,r] front
			if(a[r]>a[r-1]) dp[l][r][1]=(dp[l][r][1]+dp[l][r-1][1])%mod;//Last number insert from the back,which is a[r-1], and a[r] > a[r-1], then a[r] can be inserted to the seqment[l,r-1] back
			if(a[l]<a[r]) dp[l][r][0]=(dp[l][r][0]+dp[l+1][r][1])%mod;//Last number insert from the back,which is a[r], and a[r] < a[l] then a[l] can be inserted to the seqment[l+1,r] front
			if(a[r]>a[l]) dp[l][r][1]=(dp[l][r][1]+dp[l][r-1][0])%mod;//Last number insert from the front,which is a[l], and a[r] > a[l] then a[r] can be inserted to the seqment[l,r-1] back
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<dp[i][j][0]<<" "<<dp[i][j][1]<<endl;
		}
	}
	cout<<(dp[1][n][0]+dp[1][n][1])%mod<<endl; 
	return 0;
}


