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
#define int long long
using namespace std;
const int INF = 0x3f3f3f3f;
int dp[1010][1010][2];
int a[1010][1010];
signed main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}	
	}
	for(int i=1;i<=n;i++) dp[i][0][0]=dp[i][0][1]=1;
	for(int i=1;i<=m;i++) dp[0][i][0]=dp[0][i][1]=1;
	dp[1][1][0]=a[1][1];
	dp[1][1][1]=a[1][1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
//				cout<<a[i][j]<<endl;
//				cout<<i-1<<" "<<j<<endl;
				if(i-1!=0) 
				dp[i][j][0]=max(a[i][j]&dp[i-1][j][0],a[i][j]&dp[i-1][j][1]);
				if(j-1!=0)
				dp[i][j][1]=max(a[i][j]&dp[i][j-1][0],a[i][j]&dp[i][j-1][1]);
//				cout<<(a[i][j]&dp[i-1][j][0])<<" "<<dp[i-1][j][0]<<endl;
//				cout<<dp[i][j][0]<<" "<<dp[i][j][1]<<endl;
		}
	}
	cout<<max(dp[n][m][1],dp[n][m][0])<<endl;
    return 0;
}

