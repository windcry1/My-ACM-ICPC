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
const ll mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
struct mat{
	ll a[9][9]={
		1,0,0,1,0,0,1,0,0,
		1,0,0,0,0,0,0,0,0,
		1,0,0,0,0,0,0,0,0,
		0,1,0,0,1,0,0,1,0,
		0,1,0,0,1,0,0,0,0,
		0,1,0,0,0,0,0,0,0,
		0,0,1,0,0,1,0,0,1,
		0,0,1,0,0,1,0,0,1,
		0,0,1,0,0,1,0,0,1,
	};
};
mat qc(mat a,mat b){
	mat res;memset(res.a,0,sizeof res.a);
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			for(int k=0;k<9;k++){
				res.a[i][j]=(res.a[i][j]+a.a[i][k]*b.a[k][j])%mod;
			}
		}
	}
	return res;
}
mat qmi(mat a,ll n){
	mat res;
	for(int i=0;i<9;i++)
		for(int j=0;j<9;j++)
			if(i==j) res.a[i][j]=1;
			else res.a[i][j]=0;
	while(n){
		if(n&1) res=qc(res,a);
		a=qc(a,a);
		n>>=1;
	}
	return res;
}

int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	ll n;cin>>n;
	mat x;
	x=qmi(x,n-2);
	ll res=0;
	for(int i=0;i<9;i++)
		for(int j=0;j<9;j++)
			res=(res+x.a[i][j])%mod;
	cout<<res<<endl;
	return 0;
}


