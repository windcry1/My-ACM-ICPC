/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/5/2019 10:41:12 PM
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
int dp[110][110];
int chu[110],ru[110];
void debug(int n)
{
	cout<<endl<<endl;
	cout<<"--------debug info---------"<<endl;
	cout<<"-----------chu-------------"<<endl;
	for(int i=1;i<=n;i++)
		cout<<chu[i]<<" ";
	cout<<endl;
	cout<<"-----------ru-------------"<<endl;
	for(int i=1;i<=n;i++)
		cout<<ru[i]<<" ";
	cout<<endl;
	cout<<"-------------end-----------";
	cout<<endl<<endl;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;cin>>T;
	while(T--)
	{
		memset(dp,0,sizeof dp);
		memset(chu,0,sizeof chu);
		memset(ru,0,sizeof(ru));
		int n,m;cin>>n>>m;
		for(int i=0;i<m;i++)
		{
			int x,y;cin>>x>>y;
			dp[x][y]=1;
		}
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				if(dp[i][j])
					++chu[i],++ru[j];
		//debug(n);
		int f=0;
		for(int i=1;i<=n;i++)
			if(!(chu[i]%2))
			{
				cout<<"no"<<endl;
				f=1;
				break;
			}
		if(!f) cout<<"yes"<<endl;
	}
	return 0;
}

