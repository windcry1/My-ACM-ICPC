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
int a[100010],n=4,dp[100010];
int lis(){
	int res=0;
	for(int i=0;i<n;i++){dp[i]=1;
        for(int j=0;j<i;j++)
            if(a[j]<a[i])dp[i]=MAX(dp[j]+1,dp[i]);
		res=MAX(res,dp[i]);
    }
    return res;
}
int lds(){
	int res=0;
	for(int i=0;i<n;i++){dp[i]=1;
        for(int j=0;j<i;j++)
            if(a[j]>a[i]) dp[i]=MAX(dp[j]+1,dp[i]);
		res=MAX(res,dp[i]);
    }
    return res;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	for(int i=0;i<n;i++) a[i]=i+1;
	do{
		cout<<lis()<<" "<<lds()<<endl;
		if(lis()==4 and lds()==5){
			for(int i=0;i<n;i++) cout<<a[i]<<" ";cout<<endl;
			break; 
		}
	}while(next_permutation(a,a+n));
	return 0;
}


