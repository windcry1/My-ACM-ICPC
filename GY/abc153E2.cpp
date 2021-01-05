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
int v[1010],w[1010],dp[20010];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int h,n;
	cin>>h>>n;
	for(int i=1;i<=n;i++){
		cin>>v[i]>>w[i];
	}
	memset(dp,INF,sizeof dp);
	dp[0]=0;
	for(int i=1;i<=n;i++){
		for(int j=v[i];j<=20000;j++){
			 dp[j]=min(dp[j],dp[j-v[i]]+w[i]);
		}
	}
	int mmin=INF;
	for(int i=h;i<=20000;i++){
		mmin=min(mmin,dp[i]);
	}
	cout<<mmin<<endl;
    return 0;
}

