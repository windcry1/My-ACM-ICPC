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
#define DEBUG(x) cout<<#x<<" : "<<x<<endl;
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
int dp1[210][210],dp2[210][210];
int a[210];
int suf[210];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
	int n;cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i],a[i+n]=a[i];
	for(int i=1;i<=2*n;i++) suf[i]=suf[i-1]+a[i];
	memset(dp2,INF,sizeof dp2);
	for(int i=1;i<=2*n;i++) dp2[i][i]=0;
	for(int len=1;len<=n;len++){
		for(int l=1;l+len-1<=2*n;l++){
			int r=l+len-1;
			for(int i=l;i<r;i++){
				dp1[l][r]=max(dp1[l][r],dp1[l][i]+dp1[i+1][r]+suf[r]-suf[l-1]);
				dp2[l][r]=min(dp2[l][r],dp2[l][i]+dp2[i+1][r]+suf[r]-suf[l-1]);
			}
		}
	}
	int res1=0,res2=INF;
	for(int i=1;i<=n;i++){
		res1=max(res1,dp1[i][i+n-1]);
		res2=min(res2,dp2[i][i+n-1]);
	}
	cout<<res2<<endl<<res1<<endl;
	return 0;
}


