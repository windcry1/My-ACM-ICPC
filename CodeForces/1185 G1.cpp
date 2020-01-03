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
#include<map>
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
const ll mod=1e9+7;
vector<int> v[4]; 
ll cnt;
void dfs(int now,int T)
{
	if(T<0)
		return;
	if(T==0)
		cnt++;
	if(now==0)
	{
		for(int i=0;i<v[1].size();i++)
		{
			int t=*(v[1].begin()+i);
			v[1].erase(v[1].begin()+i);
			dfs(1,T-t);
			v[1].insert(v[1].begin()+i,t);
		}
		for(int i=0;i<v[2].size();i++)
		{
			int t=*(v[2].begin()+i);
			v[2].erase(v[2].begin()+i);
			dfs(2,T-t);
			v[2].insert(v[2].begin()+i,t);
		}
		for(int i=0;i<v[3].size();i++)
		{
			int t=*(v[3].begin()+i);
			v[3].erase(v[3].begin()+i);
			dfs(3,T-t);
			v[3].insert(v[3].begin()+i,t);
		}
	}
	else if(now==1)
	{
		for(int i=0;i<v[2].size();i++)
		{
			int t=*(v[2].begin()+i);
			v[2].erase(v[2].begin()+i);
			dfs(2,T-t);
			v[2].insert(v[2].begin()+i,t);
		}
		for(int i=0;i<v[3].size();i++)
		{
			int t=*(v[3].begin()+i);
			v[3].erase(v[3].begin()+i);
			dfs(3,T-t);
			v[3].insert(v[3].begin()+i,t);
		}
	}
	else if(now==2)
	{
		for(int i=0;i<v[1].size();i++)
		{
			int t=*(v[1].begin()+i);
			v[1].erase(v[1].begin()+i);
			dfs(1,T-t);
			v[1].insert(v[1].begin()+i,t);
		}
		for(int i=0;i<v[3].size();i++)
		{
			int t=*(v[3].begin()+i);
			v[3].erase(v[3].begin()+i);
			dfs(3,T-t);
			v[3].insert(v[3].begin()+i,t);
		}
	}
	else if(now==3)
	{
		for(int i=0;i<v[1].size();i++)
		{
			int t=*(v[1].begin()+i);
			v[1].erase(v[1].begin()+i);
			dfs(1,T-t);
			v[1].insert(v[1].begin()+i,t);
		}
		for(int i=0;i<v[2].size();i++)
		{
			int t=*(v[2].begin()+i);
			v[2].erase(v[2].begin()+i);
			dfs(2,T-t);
			v[2].insert(v[2].begin()+i,t);
		}
	}
}
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,T,t[1100],g[1100];
	cin>>n>>T;
	for(int i=0;i<n;i++)
	{
		cin>>t[i]>>g[i];
		v[g[i]].push_back(t[i]);
	}
	dfs(0,T);
	cout<<cnt%mod<<endl;
 	return 0;
}

