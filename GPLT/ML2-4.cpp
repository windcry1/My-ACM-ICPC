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
const int MMAX=2147483647;
const int mod=1e9+7;
int dp[1001][1001];
int a[1001];
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int v,e,k,x,y;
	cin>>v>>e>>k;
	while(e--)
	{
		cin>>x>>y;
		dp[x][y]=1;
		dp[y][x]=1;
	}
	int m;
	cin>>m;
	while(m--)
	{
		int flag=1;
		vector<int> ve;
		for(int i=1;i<=v;i++)
		{
			cin>>a[i];
			int te=0;
			for(int j=0;j<ve.size();j++)
				if(a[i]==ve[j])
				{
					te=1;
					break;
				}
			if(!te)
				ve.push_back(a[i]);
		}
		if(ve.size()!=k)
			flag=0;
		for(int i=1;i<=v;i++)
		{
			for(int j=i+1;j<=v;j++)
			{
				if(dp[i][j]&&a[i]==a[j])
				{
					flag=0;
					break;
				}
			}
			if(flag==0)
				break;
		}
		if(flag) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
 	return 0;
}

