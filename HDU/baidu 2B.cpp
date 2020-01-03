/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/18/2019 6:11:11 PM
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
typedef pair<ll,ll> pll;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
vector<int> v[55],res;
bool vis[55];
int n,m;
bool flag=false;
void dfs(int x)
{
	if(x==m)
	{
		bool t=false;
		for(auto i:res)
			cout<<(t?" ":"")<<i,t=true;
		flag=true;
		cout<<endl;
		return ;
	}
	for(auto i:v[x+1])
	{
		if(flag) break;
		if(!vis[i]) {
			vis[i]=true;
			res.push_back(i);
			dfs(x+1);
			res.pop_back();
			vis[i]=false;
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
	int T;cin>>T;
	while(T--)
	{
		res.clear();
		flag=false;
		for(int i=0;i<55;i++)
			v[i].clear();
		cin>>n>>m;
		string s1,s2;
		cin>>s1>>s2;
		for(int j=0;j<m;j++)
			for(int k=0;k<m;k++)
				if(s1[j]==s2[k])
					v[j+1].push_back(k+1);
		for(int i=1;i<n;i++)
		{
			cin>>s1>>s2;
			for(int j=0;j<m;j++)
			{
				vector<int> t,temp;
				for(int k=0;k<m;k++)
					if(s1[j]==s2[k])
						t.push_back(k+1);
				set_intersection(v[j+1].begin(),v[j+1].end(),t.begin(),t.end(),back_inserter(temp));
				v[j+1]=temp;
			}
		}
		dfs(0);
		if(!flag) cout<<-1<<endl;
	}
	return 0;
}

