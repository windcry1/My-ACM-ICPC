/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/6/2019 7:24:25 PM
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
char a[110][110];
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
		memset(a,0,sizeof a);
		int n;cin>>n;
		for(int i=1;i<=n;i++)
		{
			//a[i][0]='.';a[n+1][0]='.';
			for(int j=1;j<=n;j++)
				cin>>a[i][j];//a[0][j]='.',a[n+1][j]='.';
		}
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
			{
				if(a[i][j]=='*')
				{
					cout<<"-1"<<(j==n?"\n":" ");
					continue;
				}
				int cnt=0;
				for(int k=i-1;k<=i+1;k++)
					for(int l=j-1;l<=j+1;l++)
						if(a[k][l]=='*') ++cnt;
				cout<<cnt<<(j==n?"\n":" ");
			}
	}
	return 0;
}

