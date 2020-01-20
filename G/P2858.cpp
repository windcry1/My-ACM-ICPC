#include<cstdio>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<cctype>
#include<ctime>
#include<iostream>
#include<string>
#include<map>
#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<iomanip>
#include<list>
#include<bitset>
#include<sstream>
#include<fstream>
#include<complex>
#include<algorithm>
#if __cplusplus >= 201103L
#include <unordered_map>
#include <unordered_set>
#endif
#define ll long long
using namespace std;
const int INF = 0x3f3f3f3f;
int a[2100],dp[1010][1010];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	memset(dp,0,sizeof dp);
	for(int i=1;i<=t;i++){
		cin>>a[i];
		dp[i][i]=a[i]*t;
	}
	for(int len=2;len<=t;len++){
		for(int l=1;l+len<=t+1;l++){
			int r=l+len-1;
			dp[l][r]=max(dp[l+1][r]+a[l]*(t-len+1),dp[l][r-1]+a[r]*(t-len+1));
		} 
	}
	cout<<dp[1][t]<<endl;
    return 0;
}

