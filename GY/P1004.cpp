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
ll a[20][20],dp[20][20][20][20]; 
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	int x,y;ll v;
	while(cin>>x>>y>>v){
		if(x==0&&y==0&&v==0) break;
		a[x][y]=v;
	}
	memset(dp,0,sizeof dp);
	for(int i=1;i<=t;i++){
		for(int j=1;j<=t;j++){
			for(int k=1;k<=t;k++){
				int l=i+j-k;
				if(l>0){
				if(i!=k&&j!=l){
				ll m=max(dp[i-1][j][k-1][l]+a[i][j]+a[k][l],dp[i-1][j][k][l-1]+a[i][j]+a[k][l]);
				ll n=max(dp[i][j-1][k-1][l]+a[i][j]+a[k][l],dp[i][j-1][k][l-1]+a[i][j]+a[k][l]);
				dp[i][j][k][l]=max(m,n);
				}
				else{
				ll m=max(dp[i-1][j][k-1][l]+a[i][j],dp[i-1][j][k][l-1]+a[i][j]);
				ll n=max(dp[i][j-1][k-1][l]+a[i][j],dp[i][j-1][k][l-1]+a[i][j]);
				dp[i][j][k][l]=max(m,n);}	
				}
			}
		}
	}
	cout<<dp[t][t][t][t]<<endl;
    return 0;
}

