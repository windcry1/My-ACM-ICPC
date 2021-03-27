/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 2021/3/27 15:29:52
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
#define endl '\n'
#define ALL(x) x.begin(),x.end()
#define MP(x,y) make_pair(x,y)
#define int long long
#define ull unsigned long long
using namespace std;
int a[100010];
int dp[6];
signed main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n;cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		int dpp[6];
		for(int j=0;j<6;j++) dpp[j] = dp[j];
		for(int j=0;j<6;j++){
			dp[(dpp[j]+a[i])%6] = max(dp[(dpp[j]+a[i])%6],dpp[j]+a[i]);
		}
	}
	cout<<(dp[0]==0?-1:dp[0])<<endl;
	return 0;
}


