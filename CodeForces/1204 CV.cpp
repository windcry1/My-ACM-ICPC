/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/20/2019 11:11:20 PM
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
char a[110][110];
int cnt[110];
vector<int> res;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
			if(a[i][j]=='1') ++cnt[i];
		}
	}
	int m,pre;cin>>m>>pre;
	res.push_back(pre);
	for(int i=1;i<m-1;i++)
	{
		int t;cin>>t;
		if(cnt[pre]!=1)
			res.push_back(t);
		pre=t;
	}
	if(cnt[pre]==1)
		res.pop_back();
	int f=0;
	cout<<res.size()+1<<endl;
	for(auto i:res)
		cout<<(f?" ":"")<<i,f=1;
	cin>>pre;
	cout<<" "<<pre<<endl;
	return 0;
}

