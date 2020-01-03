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
int dp[100100][13];
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	while(cin>>n&&n)
	{
		memset(dp,0,sizeof(dp));
		int MAX=0,x,t;
		for(int i=0;i<n;i++)
		{
			cin>>x>>t;
			dp[t][x+1]++;
			if(t>MAX)
				MAX=t;
		}
		for(int i=MAX;i>=1;i--)
			for(int j=1;j<=11;j++)
				dp[i-1][j]+=max(dp[i][j-1],max(dp[i][j+1],dp[i][j]));
		cout<<dp[0][6]<<endl;
	}
 	return 0;
}

