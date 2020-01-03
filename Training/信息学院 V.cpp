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
int w[110],v[110],dp[110][110];
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,m,k,s;
	while(cin>>n>>m>>k>>s)
	{
		memset(dp,0,sizeof(dp));
		for(int i=1;i<=k;i++)
			cin>>v[i]>>w[i];
		for(int i=1;i<=k;i++)
			for(int p=w[i];p<=m;p++)
				for(int j=1;j<=s;j++)
					dp[p][j]=max(dp[p][j],dp[p-w[i]][j-1]+v[i]);
		int f=1;
		for(int i=1;i<=m;i++)
		{
			if(dp[i][s]>=n)
			{
				cout<<m-i<<endl;
				f=0;
				break;
			}
		}
		if(f)cout<<"-1"<<endl;
	}
 	return 0;
}

