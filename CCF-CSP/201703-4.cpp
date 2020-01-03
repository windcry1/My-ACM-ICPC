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
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=2147483647;
const int mod=1e9+7;
priority_queue<pair<int,int> > dp[100001];
int t[100001];
bool cmp(const pair<int,int> a,const pair<int,int> b)
{
	return a.first < b.first;
}
void dfs(int a,int sum)
{
	if(t[a]!=0)
		t[a]=min(t[a],sum);
	else
		t[a]=sum;
	for(int i=0;i<dp[a].size();i++)
	{
		pair<int,int> temp=dp[a].top();
		dp[a].pop();
		dfs(temp.first,max(temp.second,sum));
		dp[a].push(temp);
	}
}
int main()
{
	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,m,a,b,d;
	cin>>n>>m;
	while(m--)
	{
		cin>>a>>b>>d;
		dp[a].push(make_pair<int,int> (b,d));//aµ½b¾àÀëÎªd
	}
	int te=dp[1].size();
	while(te--)
	{
		pair<int,int> temp=dp[1].top();
		dfs(temp.first,temp.second);
		dp[1].pop();
		dp[1].push(temp);
	}
	cout<<t[n]<<endl;
	return 0;
}

