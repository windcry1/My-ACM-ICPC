/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/26/2019 2:20:37 PM
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
int dp[510][510],a[510];
bool vis[510];
struct node{
	int first,second,step;
	node(int x,int y,int z) : first(x),second(y),step(z) { }
};
int MAX=INF,max_step=0;
int n,m,c1,c2;
map<int,int> ma;
void dfs(int t,int dqz,int ch)
{
	if(t==c2)
	{
		++ma[ch];
		if(ch<MAX)
			MAX=ch,max_step=dqz;
		else if(ch==MAX)
			max_step=max(max_step,dqz);
		return ;
	}
	for(int i=0;i<n;i++)
		if(dp[i][t]&&!vis[i])
		{
			vis[i]=true;
			dfs(i,dqz+a[i],ch+dp[i][t]);
			vis[i]=false;
		}
}
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	cin>>n>>m>>c1>>c2;
	for(int i=0;i<n;i++) cin>>a[i];
	int t1,t2,l;
	while(m--)
		cin>>t1>>t2>>l,dp[t1][t2]=l,dp[t2][t1]=l;
	vis[c1]=true;
	dfs(c1,a[c1],0);
	cout<<ma[MAX]<<" "<<max_step<<endl;
 	return 0;
}

