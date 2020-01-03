/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/29/2019 8:53:49 PM
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
const int MMAX = 0x3fffffff;
const int INF = 0xfffffff;
const int mod = 1e9+7;
int a[110];
int dp[110];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int L;cin>>L;
	int s,t,m;cin>>s>>t>>m;
	for(int i=1;i<=m;i++) cin>>a[i];
	map<int,int> ma;
	sort(a+1,a+m+1);
	ma[0]=1;
	for(int i=1;i<=m;i++){
		int MIN=MMAX;
		for(int j=s;j<=t;j++){
			if(a[i]-j<0) continue;
			MIN=min(ma[a[i]-j],MIN);
		}
		ma[a[i]]=MIN;
	}
	for(auto i:ma){
		cout<<i.first<<" "<<i.second<<endl;
	} 
	return 0;
}

