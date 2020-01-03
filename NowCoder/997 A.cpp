/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/21/2019 3:54:48 PM
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
int x[2010],y[2010],r[2010];
int dp[2010][2010];
bool vis[2010];
int n;
void bfs(int temp)
{
	queue<int> q;
	q.push(temp);
	vis[temp]=true;
	int p;
	while(!q.empty())
	{
		int t=q.front();
		q.pop();
		p=t;
		for(int i=0;i<n;i++)
			if(dp[t][i]&&!vis[i])
			{
				vis[i]=true;
				q.push(i);
			}
	}
	cout<<x[p]<<" "<<y[p]<<endl;
}
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	cin>>n;
	int t;
	for(int i=0;i<n;i++)
	{
		cin>>x[i]>>y[i]>>r[i];
		if(x[i]==0&&y[i]==0)
			t=i;
	}
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			dp[i][j]=((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])-(r[i]+r[j])*(r[i]+r[j])==0?1:0),dp[j][i]=dp[i][j];
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<n;j++)
//			cout<<dp[i][j]<<" ";
//		cout<<endl;
//	}
	bfs(t);
 	return 0;
}

