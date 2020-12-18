#include<bits/stdc++.h>
using namespace std;
template<typename T> inline T MIN(const T &a,const T &b) {return a<b?a:b;}
template<typename T> inline T MAX(const T &a,const T &b) {return a>b?a:b;}
template<typename T,typename ...Args> inline T MIN(const T &a,const T &b,Args ...args) {return MIN(MIN(a,b),args...);}
template<typename T,typename ...Args> inline T MAX(const T &a,const T &b,Args ...args) {return MAX(MAX(a,b),args...);}
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<double,double> pdd;
const double eps = 1e-8;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int dir[4][2]={-1,0,1,0,0,-1,0,1};
int dp[40][2];
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#ifdef WindCry1
	freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
#endif
	dp[1][0]=1;
	dp[1][1]=1;
	for(int i=2;i<=30;i++){
		dp[i][1]=dp[i-1][0];
		dp[i][0]=dp[i-1][0]+dp[i-1][1];
	}
	cout<<dp[30][0]+dp[30][1]<<endl;
	int res=0;
	for(int i=0;i<(1<<30);i++)
		if(!((i<<1)&i)) res++;
	cout<<res<<endl;
	cout<<format("{}\n",res)<<endl;
	return 0;
}


