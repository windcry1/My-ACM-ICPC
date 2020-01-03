//Author: WindCry1
//Mail: lanceyu120@gmail.com
//Website: https://windcry1.com
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
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
int w[10100],d[10100];
int dp[13100];
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,m;
	while(cin>>n>>m)
	{
		memset(dp,0,sizeof(dp));
		for(int i=1;i<=n;i++)
			cin>>w[i]>>d[i];
		for(int i=1;i<=n;i++)
			for(int j=m;j>=w[i];j--)
				dp[j]=max(dp[j],dp[j-w[i]]+d[i]);
		cout<<dp[m]<<endl;
	}
 	return 0;
}

