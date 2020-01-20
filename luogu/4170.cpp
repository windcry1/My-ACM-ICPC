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
int dp[100][100];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	string s;
	cin>>s;
	memset(dp,INF,sizeof dp);
	for(int i=0;i<s.size();i++){
		dp[i][i]=1;
	}
	for(int len=2;len<=s.size();len++){
		for(int l=0;l+len-1<s.size();l++){
			int r=l+len-1;
			if(s[l]==s[r]){
				dp[l][r]=min(dp[l][r-1],dp[l+1][r]);
			}
			else{
				for(int k=l;k<r;k++){
					dp[l][r]=min(dp[l][r],dp[l][k]+dp[k+1][r]);
				}
			}
		}
	}
	cout<<dp[0][s.size()-1]<<endl; 
    return 0;
}
