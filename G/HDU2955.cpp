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
int v[110];
double p[110],dp[10010];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		double m;
		int n;
		cin>>m>>n;
		memset(dp,0,sizeof dp);
		dp[0]=1; 
		int sum=0;
		for(int i=1;i<=n;i++){
			cin>>v[i]>>p[i];
			sum+=v[i];
			p[i]=1-p[i];
		}
		for(int i=1;i<=n;i++){
			for(int j=sum;j>=v[i];j--){
				dp[j]=max(dp[j],dp[j-v[i]]*p[i]);
			}
		}
		for(int i=sum;i>=0;i--){
			if(dp[i]>1-m){
				cout<<i<<endl;
				break;
			}
		}
	} 
    return 0;
}

