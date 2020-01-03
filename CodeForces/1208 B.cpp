/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/25/2019 10:43:34 PM
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
int a[2010];
map<int,int> ma;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;cin>>n;
	for(int i=0;i<n;i++) cin>>a[i],ma[a[i]]++;
	int cnt=0;
	for(auto i:ma)
		if(i.second>1)
			++cnt;
	int MIN=MMAX;
	for(int i=0;i<n;i++)
	{
		if(cnt==0) break;
		map<int,int> t_map(ma);
		int t_cnt=cnt;
		for(int j=i;j<n;j++)
		{
			t_map[a[j]]--;
			if(t_map[a[j]]==1)
				--t_cnt;
			if(t_cnt==0)
			{
				MIN=min(j-i+1,MIN);
				break;
			}
		}
	}
	cout<<(MIN==MMAX?0:MIN)<<endl;
	return 0;
}

