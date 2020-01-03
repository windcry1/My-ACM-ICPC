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
int w[110],v[110];
int dp[200100];
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>w[i]>>v[i];
		w[i]+=100000;
	}
	for(int i=0;i<200100;i++)
		dp[i]=-INF;
	dp[100000]=0;
	for(int i=1;i<=n;i++)
	{
		if(w[i]>100000)
		{
			for(int j=200000;j>=w[i]-100000;j--)
				dp[j]=max(dp[j],dp[j-w[i]+100000]+v[i]);
		}
		else
		{
			for(int j=0;j<w[i]+100000;j++)
				dp[j]=max(dp[j],dp[j-w[i]+100000]+v[i]);
		}
	}
	int res=0;
	for(int i=100000;i<=200000;i++)
		if(dp[i]>=0)
			res=max(res,dp[i]+i-100000);
	cout<<res<<endl;
	return 0;
}

