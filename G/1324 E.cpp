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
int a[2010],dp[2010][2010],s[2010];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n,h,l,r;
	cin>>n>>h>>l>>r;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		s[i]=s[i-1]+a[i];
	}
	memset(dp,-INF,sizeof dp);
	dp[0][0]=0;
	for(int i=1;i<=n;i++){
		for(int j=0;j<=i;j++){
			int k=s[i]-j;
			k%=h;
			if(k<=r&&k>=l){
				dp[i][j]=max(dp[i-1][j-1==-1?0:j-1],dp[i-1][j])+1;
			}
			else dp[i][j]=max(dp[i-1][j-1==-1?0:j-1],dp[i-1][j]);
		}
	}
	int mmax=0;
	for(int i=1;i<=n;i++){
		if(dp[n][i]>mmax) mmax=dp[n][i];
	}
	cout<<mmax<<endl;
    return 0;
}

