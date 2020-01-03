/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/26/2019 5:45:08 PM
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
vector<int> v[110];
int out[110];
int MAX=0;
void dfs(int t,int p)
{
	if(v[t].empty())
		return ;
	MAX=max(MAX,p);
	int res=0;
	for(auto i:v[t])
	{
		if(v[i].empty())
			res++;
	}
	out[p]+=res;
//	if(!f)
//		cout<<res,f=1;
//	else cout<<" "<<res;
	for(auto i:v[t])
		dfs(i,p+1);
}
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,m;
	cin>>n>>m;
	v[0].push_back(1);
	for(int i=0;i<m;i++)
	{
		int root,k,temp;
		cin>>root>>k;
		while(k--)
		{
			cin>>temp;
			v[root].push_back(temp);
		}
	}
	dfs(0,0);
	int f=0;
	for(auto i=0;i<=MAX;i++)
		if(!f)
			cout<<out[i],f=1;
		else cout<<" "<<out[i];
	cout<<endl;
 	return 0;
}

