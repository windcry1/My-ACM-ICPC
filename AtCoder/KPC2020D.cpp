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
bool judge(int *a,int n){
	for(int i=0;i<n-1;i++){
		if(a[i]>a[i+1]) return false;
	}
#ifdef WindCry1
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<endl;
#endif
	return true;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
	int n;cin>>n;
	int a[20],b[20],oria[20],orib[20];
	for(int i=0;i<n;i++) cin>>a[i],oria[i]=a[i];
	for(int i=0;i<n;i++) cin>>b[i],orib[i]=b[i];
	int res=INF;
	for(int state=0;state<(1<<(n-1));state++){
		for(int i=0;i<n-1;i++){
			if(state & (1<<i)){
				swap(a[i],b[i+1]);
				swap(a[i+1],b[i]);
			}
		}
		if(judge(a,n)) res=min(res,__builtin_popcount(state));
		for(int i=0;i<n;i++) a[i]=oria[i],b[i]=orib[i];
	}
	cout<<(res==INF?-1:res)<<endl;
	return 0;
}


