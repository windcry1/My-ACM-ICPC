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
int dp[100010][10],a[100010];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	int t=0,cnt=0;
	for(int i=1;i<=n;i++){
		int t;
		cin>>t;
		a[t]++;
	}
	memset(dp,0,sizeof dp);
	dp[1][1]=1*a[1];dp[1][0]=0;
	for(int i=1;i<=100005;i++){
		dp[i][1]=dp[i-1][0]+i*a[i];
		dp[i][0]=max(dp[i-1][0],dp[i-1][1]);
	}
	cout<<max(dp[100005][1],dp[100005][0])<<endl;
    return 0;
}

