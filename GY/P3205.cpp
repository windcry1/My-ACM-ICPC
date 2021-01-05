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
ll a[1010],dp[2][1010][1010];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		cin>>a[i];
		//dp[1][i][i]=1;
		dp[0][i][i]=1;
	}
	ll mod=19650827;
	for(int len=2;len<=t;len++){
		for(int l=1;l+len<=t+1;l++){
			int r=l+len-1;
			if(a[l]<a[l+1]) dp[0][l][r]=(dp[0][l][r]+dp[0][l+1][r])%mod;
			if(a[r]>a[r-1]) dp[1][l][r]=(dp[1][l][r]+dp[1][l][r-1])%mod;
			if(a[l]<a[r]) dp[0][l][r]=(dp[0][l][r]+dp[1][l+1][r])%mod;
			if(a[r]>a[l]) dp[1][l][r]=(dp[1][l][r]+dp[0][l][r-1])%mod;
		}
	}
	cout<<(dp[1][1][t]+dp[0][1][t])%mod<<endl;
    return 0;
}

