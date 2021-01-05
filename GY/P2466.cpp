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
double dp[2][1010][1010],sum[1010];
struct sut{
	double x;
	double y;
	double z;
}a[1010];
int cmp(sut c,sut b){
	return c.x<b.x;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n;double x1;
	cin>>n>>x1;
	a[n+1].x=x1,a[n+1].y=0,a[n+1].z=0;
	for(int i=1;i<=n;i++){
		cin>>a[i].x;
	}
	double tot=0;
	for(int i=1;i<=n;i++){
		cin>>a[i].y;
		tot+=a[i].y;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i].z;
	} 
	n++;
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			dp[1][i][j]=INF;
			dp[0][i][j]=INF;
		}
	}
	for(int i=1;i<=n;i++){
		sum[i]+=a[i].z+sum[i-1];
		if(a[i].x==x1&&a[i].y==0&&a[i].z ==0) dp[0][i][i]=0,dp[1][i][i]=0; 
	}
	for(int len=2;len<=n;len++){
		for(int i=1;i+len<=n+1;i++){	
			int j=i+len-1;
			dp[0][i][j]=min(dp[0][i][j],dp[0][i+1][j]+(a[i+1].x-a[i].x)*(sum[i]+sum[n]-sum[j]));
			dp[0][i][j]=min(dp[0][i][j],dp[1][i+1][j]+(a[j].x-a[i].x)*(sum[i]+sum[n]-sum[j]));
			dp[1][i][j]=min(dp[1][i][j],dp[1][i][j-1]+(a[j].x-a[j-1].x)*(sum[i-1]+sum[n]-sum[j-1]));
			dp[1][i][j]=min(dp[1][i][j],dp[0][i][j-1]+(sum[n]-sum[j-1]+sum[i-1])*(a[j].x-a[i].x));
		}
	}
	printf("%.3lf\n",(tot-min(dp[1][1][n],dp[0][1][n]))/1000);
    return 0;
}

