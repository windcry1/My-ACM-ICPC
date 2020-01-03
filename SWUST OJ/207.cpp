/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/31/2019 10:17:13 AM
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
vector<pii> v[32];
int n;
bool vis[32];
int MIN=INF;
void dfs(int x,int val)
{
	if(x==n)
	{
		MIN=min(MIN,val);
		return ;
	}
	for(vector<pii>::iterator it=v[x].begin();it!=v[x].end();it++)
		if(!vis[it->second])
		{
			vis[it->second]=true;
			dfs(x+1,val+it->first);
			vis[it->second]=false;
		}
}
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int t;
		for(int j=0;j<n;j++)
			cin>>t,v[i].push_back(make_pair(t,j));
	}
	dfs(0,0);
	cout<<MIN<<endl;
 	return 0;
}

