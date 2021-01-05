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
int dp[10010];
pair<int,int> pii[1010];
set<int> st;
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int h,n;
	cin>>h>>n;
	for(int i=1;i<=n;i++){
		cin>>pii[i].second>>pii[i].first;
	}
	//cout<<pii[6].first<<endl;
	memset(dp,INF,sizeof dp);
	dp[0]=0;
	for(int i=1;i<=n;i++){
		for(int j=pii[i].second;j<=h;j++){
			dp[j]=min(dp[j],dp[j-pii[i].second]+pii[i].first);
		}
	}
	n++;
	pii[n].first=0,pii[n].second=0;
	for(int i=0;i<=h;i++){
		if(dp[i]!=INF){
			for(int j=1;j<=n;j++){
				if(i+pii[j].second>=h){
					//cout<<pii[6].first<<" "<<pii[6].second<<endl;
					//cout<<i<<" "<<j<<" "<<i+pii[j].second<<" "<<dp[i]+pii[j].first<<" "<<pii[j].first<<endl;
					st.insert(dp[i]+pii[j].first);
				}
			}
		}
	}
	cout<<*st.begin()<<endl;
    return 0;
}

