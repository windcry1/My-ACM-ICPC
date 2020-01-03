/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/23/2019 6:14:40 PM
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
ll a[300010];
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,m,k;
	cin>>n>>m>>k;
	for(int i=0;i<n;i++)
		cin>>a[i];
	ll MAX=0;
	for(int j=0;j<m;j++)
	{
		ll now=0,MIN=0;
		for(int i=j;i<n;i++)
		{
			if(i%m==j)
				MIN=min(now,MIN),now-=k;
			now+=a[i];
			MAX=max(MAX,now-MIN);
		}
	}
	cout<<MAX<<endl;
 	return 0;
}
