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
int dp[1001][1001];
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int x[5],y[5];
	while(cin>>x[0]>>y[0]>>x[1]>>y[1])
	{
		cin>>x[2]>>y[2]>>x[3]>>y[3];
		memset(dp,0,sizeof(dp));
		if(x[0]>x[1])
			swap(x[0],x[1]);
		if(x[2]>x[3])
			swap(x[2],x[3]);
		if(y[0]>y[1])
			swap(y[0],y[1]);
		if(y[2]>y[3])
			swap(y[2],y[3]);
		for(int i=x[0];i<=x[1];i++)
		{
			dp[i+500][y[0]+500]=1;
			dp[i+500][y[1]+500]=1;
		}
		for(int i=y[0];i<=y[1];i++)
		{
			dp[x[0]+500][i+500]=1;
			dp[x[1]+500][i+500]=1;
		}
		int flag=0;
		for(int i=x[2];i<=x[3];i++)
		{
			if(dp[i+500][y[2]+500]==1||
			dp[i+500][y[3]+500]==1)
				flag=1;
		}
		for(int i=y[2];i<=y[3];i++)
		{
			if(dp[x[2]+500][i+500]==1||
			dp[x[3]+500][i+500]==1)
				flag=1;
		}
		cout<<(flag?"YES":"NO")<<"\r\n";
	}
 	return 0;
}

