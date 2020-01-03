/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/30/2019 9:52:52 PM
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
typedef pair<int,int> pii;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
int dp[1010],w[1010],v[1010];
vector<int> ve[101]; 
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int m,n;
	while(cin>>m>>n)
	{
		memset(dp,0,sizeof dp);
		for(int i=0;i<=100;i++)
			ve[i].clear();
		for(int i=1;i<=n;i++)
			cin>>w[i]>>v[i];
		for(int i=1;i<=n;i++)
			for(int j=m;j>=w[i];j--)
				if(dp[j]<dp[j-w[i]]+v[i])
				{
					dp[j]=dp[j-w[i]]+v[i];
					ve[j]=ve[j-w[i]];
					ve[j].push_back(i);
				}
		if(dp[m]!=0)
			cout<<dp[m]<<endl;
		int f=1;
		for(vector<int>::iterator it=ve[m].begin();it!=ve[m].end();it++)
		{
			if(f) cout<<*it;
			else cout<<" "<<*it;
			f=0;
		}
		if(f) cout<<"0";
		cout<<endl;
	}
 	return 0;
}

