//Author:LanceYu
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
#include<algorithm>
#include<complex>
#include<stack>
#include<bitset>
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=2147483647;
const int mod=1e9+7;
int dp[210][210]; 
int main()
{
	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=i+1;j<=n;j++)
			cin>>dp[i][j];
	for(int i=2;i<=n;i++)
		for(int j=1;j<i;j++)
			dp[1][i]=min(dp[1][i],dp[1][j]+dp[j][i]);
	cout<<dp[1][n]<<endl;
	return 0;
}

