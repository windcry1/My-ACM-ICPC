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
struct node{
	int pos,p;
}a[55];
int dp[55][55][2],pre[55];
int getsum(int l,int r){
	return pre[r]-pre[l-1];
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	int n,c;cin>>n>>c;
	memset(dp,INF,sizeof dp);
	for(int i=1;i<=n;i++) cin>>a[i].pos>>a[i].p,pre[i]=pre[i-1]+a[i].p;
	dp[c][c][0]=0,dp[c][c][1]=0;
	for(int len=2;len<=n;len++){
		for(int l=1;l+len-1<=n;l++){
			int r=l+len-1;
			dp[l][r][0]=min(dp[l+1][r][0]+(a[l+1].pos-a[l].pos)*(getsum(1,l)+getsum(r+1,n)),dp[l+1][r][1]+(a[r].pos-a[l].pos)*(getsum(1,l)+getsum(r+1,n)));
			dp[l][r][1]=min(dp[l][r-1][0]+(a[r].pos-a[l].pos)*(getsum(1,l-1)+getsum(r,n)),dp[l][r-1][1]+(a[r].pos-a[r-1].pos)*(getsum(1,l-1)+getsum(r,n)));
		}
	}
	cout<<min(dp[1][n][0],dp[1][n][1])<<endl;
	return 0;
}


