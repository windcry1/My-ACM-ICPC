/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/23/2019 7:09:34 PM
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
const int N=1e6+10;
int a[N],pre[N],ans[N];
inline int find(int x) { return pre[x]==x ? pre[x]:pre[x] = find(pre[x]);}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;cin>>n;
	fill(a,a+n,-1);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		pre[i]=i;
	}
	for(int i=0;i<n;i++)
	{
		int temp = find(a[i]%n);
		pre[temp]=(temp+1)%n;
		ans[temp]=a[i];
	}
	for(int i=0;i<n;i++)
		cout<<ans[i]<<" ";
		cout<<endl;
	return 0;
}

