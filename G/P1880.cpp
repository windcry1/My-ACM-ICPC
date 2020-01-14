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
int a[210],stone[210];
int dp1[210][210],dp2[210][210];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	memset(dp1,INF,sizeof dp1);
	memset(dp2,0,sizeof dp2);
	memset(stone,0,sizeof stone);
	for(int i=1;i<=t;i++){
		cin>>a[i];
		a[i+t]=a[i];
	}
	for(int i=1;i<=2*t;i++){
		stone[i]=stone[i-1]+a[i]; 
	}
	for(int len=1;len<=t;len++){
		for(int j=1;j+len<=t+1;j++){
			int ends=j+len-1;
			for(int i=j;i<=ends;i++){
				dp1[j][ends]=min(dp1[j][ends],dp1[j][i]+dp1[i+1][ends]+stone[ends]-stone[j-1]);
			}
		}
	}
	for(int len=1;len<=t;len++){
		for(int j=1;j+len<=t+1;j++){
			int ends=j+len-1;
			for(int i=j;i<=ends;i++){
				dp2[j][ends]=max(dp2[j][ends],dp2[j][i]+dp2[i+1][ends]+stone[ends]-stone[j-1]);
			}
		}
	}
	cout<<dp1[1][t]<<endl<<dp2[1][t]<<endl;
    return 0;
}

