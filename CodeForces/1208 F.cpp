/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 12/30/2019 11:03:37 PM
*************************************************************************/
//#pragma GCC optimize(3)//ACWing, CCF
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
int a[(1<<21)+10],b[(1<<21)+10],ans;
void f(int x,int now) {
	if (now < 2) return;
	int y = 0;
	for (int k = 20; k >= 0; k--) {
		if (x & (1 << k)) continue;
		if (b[y | (1 << k)] >= 2) {
			y |= 1 << k;
		}
	}
	ans = max(ans, x | y);
}
 
void add(int x, int k) {
	if (b[x] >= 2) return;
	b[x]++;
	while(k < 21) {
		if (x & (1 << k)) {
			add(x - (1 << k), k + 1);
		}
		k++;
	}
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
#endif
	int n;cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=n;i>=1;i--){
		f(a[i],n-i);
#ifdef WindCry1
	for(int i=0;i<=16;i++)
		cout<<b[i]<<" ";
	cout<<endl;
#endif
		add(a[i],0);
	}
	cout<<ans<<endl;
	//10
	//1000
	//100
	//111

	return 0;
}


