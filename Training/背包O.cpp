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
int a[1001];
int dp[100001];
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		memset(dp,0,sizeof(dp));
		int sum=0;
		dp[0]=1;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		for(int i=1;i<=n;i++)
			for(int j=sum;j>=a[i];j--)
				if(!dp[j]) 
					dp[j]=dp[j-a[i]];
		for(int i=sum/2;i>=0;i--)
			if(dp[i])
			{
				cout<<sum-i*2<<endl;
				break;
			}
	}
 	return 0;
}

