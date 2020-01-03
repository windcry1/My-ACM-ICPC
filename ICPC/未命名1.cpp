/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 9/8/2019 8:47:20 AM
*************************************************************************/
#include <cstring>
#include <cmath>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iostream>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <complex>
#include <stack>
#include <bitset>
#include <iomanip>
#include <list>
#if __cplusplus >= 201103L
#include <unordered_map>
#include <unordered_set>
#endif
#define ll long long
#define ull unsigned long long
using namespace std;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const double clf = 1e-8;
const int MMAX = 0x7fffffff;
const int INF = 0xfffffff;
const int mod = 1e9+7;
int a[210][16];
int dp[210][65536];
vector<pair<int,int> > v[210];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	while(cin>>n&&n)
	{
		memset(dp,0,sizeof dp);
		for(int i=0;i<210;i++) v[i].clear();
		int t;
		for(int i=1;i<=n;i++)
			for(int j=0;j<2;j++)
			{
				cin>>t;
				for(int k=8*j;k<8*j+8;k++)
					a[i][k]=t;
			}
		int ans = 1<<16;
		for(int i=1;i<=n;i++)
		{
			for(int s=0;s<ans;s++)
			{
				dp[i][s] = dp[i-1][s];
				for(int k=0;k<16;k++)
				{
					int ns=1<<k;
					if(!(s&ns)) continue;
					if(dp[i-1][s^ns]+a[i][k]>dp[i][s])
					{
						dp[i][s] = dp[i-1][s^ns]+a[i][k];
						v[i]=v[i-1];
						v[i].emplace_back(i,k);
					}
				}
			}
		}
		cout<<dp[n][65535]<<endl;
		for(auto i:v[n]){
			cout<<i.first<<" "<<a[i.first][0]<<" "<<a[i.first][8]<<" "<<i.second/8<<endl;
		}
	}
	return 0;
}

