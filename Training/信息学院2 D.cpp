/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/21/2019 9:18:13 AM
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
bool vis[110];
pair<int,int> p[110];
int cnt;
void dfs(int x)
{
	vis[x]=true;
	for(int i=1;i<cnt;i++)
		if(!vis[i]&&((p[x].first>p[i].first&&p[x].first<p[i].second)||(p[x].second>p[i].first&&p[x].second<p[i].second)))
			dfs(i);
}
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	cin>>n;
	cnt=1;
	while(n--)
	{
		int t,a,b;
		cin>>t>>a>>b;
		if(t==1)p[cnt].first=a,p[cnt].second=b,cnt++;
		else if(t==2)
		{
			memset(vis,false,sizeof(vis));
			dfs(a);
			cout<<(vis[b]?"YES":"NO")<<endl;
		}
	}
 	return 0;
}

