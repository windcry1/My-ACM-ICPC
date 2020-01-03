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
#include<iomanip>
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;
	cin>>T;
	while(T--)
	{
		int n,m,w[1010],v[1010],dp[1010]={0};
		cin>>n>>m;
		for(int i=1;i<=n;i++)
			cin>>v[i];
		for(int i=1;i<=n;i++)
			cin>>w[i];
		for(int i=1;i<=n;i++)
			for(int j=m;j>=w[i];j--)
				dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
		cout<<dp[m]<<endl;
	}
 	return 0;
}

