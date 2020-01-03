/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/21/2019 1:25:46 PM
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
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
int a[100010];
int dp[100010][102];
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,c;
	while(cin>>n>>c)
	{
		for(int i=1;i<=n;i++)
			cin>>a[i];
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=c;j++)
			{
				dp[i][j]=dp[i-1][j]+(a[i]==j&&a[i-1]!=j?1:0);
			}
		}
		vector<int> v;
		for(int i=1;i<=n;i++)
			v.push_back(dp[n][i]);
		sort(v.begin(),v.end(),greater<int>());
		if(abs(v[0]-v[1])<=1)
			cout<<v[0]+v[1]<<endl;
		else cout<<2*min(v[0],v[1])<<endl;
	}
 	return 0;
}

