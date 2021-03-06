/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 9/22/2019 2:08:01 PM
*************************************************************************/
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
#if __cplusplus >= 201103L
#include <unordered_map>
#include <unordered_set>
#endif
#define ll long long
#define ull unsigned long long
using namespace std;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const double clf = 1e-8;
const int MMAX = 0x7fffffff;
const int INF = 0xfffffff;
const int mod = 1e9+7;
ll y[10010],c[10010];
ll dp[10010];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,k;cin>>n>>k;
	for(int i=1;i<=n;i++) cin>>c[i]>>y[i];
	dp[1]=c[1]*y[1];ll m=c[1];
	for(int i=2;i<=n;i++){
		m=min(c[i],m+k);
		dp[i]=1LL*m*y[i];
	}
	ll res=0;
	for(int i=1;i<=n;i++) res+=dp[i];
	cout<<res<<endl;
	return 0;
}

