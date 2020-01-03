/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 9/2/2019 12:54:20 AM
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
const ll INF = 0x3ffffffffffffff;
const int mod = 1e9+7;
ll MIN=INF;
ll a[17]={0};
void dfs(ll n,unsigned now,ll tot){
	if(now==0){
		MIN=min(MIN,tot);
		return;
	}
	if(n>=0){
		ll temp = n / a[now];
		dfs(n-temp*a[now],now-1,tot+temp*now);
		dfs(n-(temp+1)*a[now],now-1,tot+(temp+1)*now);
	}
	else{
		ll temp = abs(n)/a[now];
		dfs(n+temp*a[now],now-1,tot+temp*now);
		dfs(n+(temp+1)*a[now],now-1,tot+(temp+1)*now);
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	a[1]=1;
	for(int i=2;i<=15;i++) a[i]=a[i-1]*10+1;
	ll n;cin>>n;
	dfs(n,15,0);
	cout<<MIN<<endl;
	return 0;
}

