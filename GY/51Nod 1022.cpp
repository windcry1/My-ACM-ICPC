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
int a[2100],stone[2100],dp[2100][2100],s[2100][2100];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t;cin>>t;
	memset(dp,INF,sizeof dp);
	for(int i=1;i<=t;i++){
		cin>>a[i];
		stone[i]=stone[i-1]+a[i];
		dp[i][i]=0;
		s[i][i]=i; 
	}
	for(int i=1;i<=t;i++){
		stone[t+i]=stone[t+i-1]+a[i];
		dp[t+i][t+i]=0;
		s[t+i][t+i]=t+i;
	}
	for(int i=t*2;i>=1;i--){
		for(int j=i+1;j<=t*2;j++){
			for(int k=s[i][j-1];k<=s[i+1][j];k++){
				int temp=INF;
				int K;
				if(temp>dp[i][k]+dp[k+1][j]+stone[j]-stone[i-1]){
					temp=dp[i][k]+dp[k+1][j]+stone[j]-stone[i-1];
					K=k;
				}
				dp[i][j]=temp;
				s[i][j]=K;
			}
		}
	}
	int Min=INF;
	for(int i=1;i<=t;i++) Min=min(Min,dp[i][i+t-1]);
	cout<<Min<<endl;
    return 0;
}

