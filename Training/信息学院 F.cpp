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
int v[10010],w[10010],dp[10010];
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;
	cin>>T;
	while(T--)
	{
		int n,m,t;
		cin>>n>>m;
		m-=n;
		cin>>n;
		for(int i=1;i<=n;i++)
			cin>>v[i]>>w[i];
		for(int i=0;i<=m;i++)
			dp[i]=INF;
		dp[0]=0;
		for(int i=1;i<=n;i++)
			for(int j=w[i];j<=m;j++)
				dp[j]=min(dp[j],dp[j-w[i]]+v[i]);
		if(dp[m]==INF)
			cout<<"This is impossible."<<endl;
		else 
			cout<<"The minimum amount of money in the piggy-bank is "<<dp[m]<<'.'<<endl;
	}
 	return 0;
}

