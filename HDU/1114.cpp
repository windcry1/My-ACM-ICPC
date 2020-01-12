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
int v[50010],w[10010];
int dp[510];
int path[510][10010];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		int m,n;
		cin>>m>>n;
		int k;
		cin>>k;
		memset(v,0,sizeof v);
		memset(w,0,sizeof w);
		memset(path,0,sizeof path);
		for(int i=1;i<=k;i++){
			cin>>v[i]>>w[i];
		}
		for(int i=n-m;i>0;i--){
			dp[i]=INF;
		}
		dp[0]=0;
		for(int i=1;i<=k;i++){
			for(int j=n-m;j>=w[i];j--){
				if(dp[j]<dp[j-w[i]]+v[i])
					dp[j]=dp[j-w[i]]+v[i];
			}
		}
		if(dp[n-m]!=INF) cout<<"This is impossible."<<endl;
		else cout<<"The minimum amount of money in the piggy-bank is "<<dp[m]<<'.'<<endl;;
	} 
    return 0;
}

