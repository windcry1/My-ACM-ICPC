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
int dp[2010][2010],s[2010][2010],suf[2010],a[2010];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
	int n;while(cin>>n){
		for(int i=1;i<=n;i++) cin>>a[i],a[i+n]=a[i];
		memset(dp,INF,sizeof dp);
		for(int i=1;i<=2*n;i++) suf[i]=suf[i-1]+a[i],s[i][i]=i,dp[i][i]=0;
		for(int len=1;len<=n;len++){
			for(int l=1;l+len-1<=2*n;l++){
				int r=l+len-1;
				for(int k=s[l][r-1];k<=s[l+1][r];k++){
					if(dp[l][r]>dp[l][k]+dp[k+1][r]+suf[r]-suf[l-1]){
						s[l][r]=k;
						dp[l][r]=dp[l][k]+dp[k+1][r]+suf[r]-suf[l-1];
					}
				}
			}
		}
		int res=INF;
		for(int i=1;i<=n;i++) res=min(res,dp[i][i+n-1]);
		cout<<res<<endl;
	}
	return 0;
}


