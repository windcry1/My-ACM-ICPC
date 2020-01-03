/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/11/2019 4:25:02 PM
*************************************************************************/
#include<cstring>
#include<cmath>
#include<cstdio>
#include<cctype>
#include<cstdlib>
#include<ctime>
#include<vector>
#include<iostream>
#include<string>
#include<queue>
#include<set>
#include<map>
#include<algorithm>
#include<complex>
#include<stack>
#include<bitset>
#include<iomanip>
#include<list>
#if __cplusplus >= 201103L
#include<unordered_map>
#include<unordered_set>
#endif
#define ll long long
#define ull unsigned long long
using namespace std;
typedef pair<int,int> pii;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
const int dir[2][2]={1,0,0,1};
int a[11][11],n;
int MAX;
int dp[11][11][11][11];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	cin>>n;
	int t1,t2,val;
	while(cin>>t1>>t2>>val&&t1&&t2&&val)
		a[t1][t2]=val;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			for(int k=1;k<=n;k++)
			{
				int l=i+j-k;
				if(l<=0) break;
                dp[i][j][k][l] = max(dp[i][j][k][l],dp[i-1][j][k-1][l]);
                dp[i][j][k][l] = max(dp[i][j][k][l],dp[i-1][j][k][l-1]);
                dp[i][j][k][l] = max(dp[i][j][k][l],dp[i][j-1][k][l-1]);
                dp[i][j][k][l] = max(dp[i][j][k][l],dp[i][j-1][k-1][l]);
                if(i==k&&j==l) dp[i][j][k][l] += a[i][j];
                else dp[i][j][k][l] += a[i][j] + a[k][l]; 
			}
	cout<<dp[n][n][n][n]<<endl;
	return 0;
}

