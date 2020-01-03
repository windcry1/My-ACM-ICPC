/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/31/2019 1:54:33 AM
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
int a[200010],d[200010],f[200010];
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	cin>>n;
	int times=0;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	int q;cin>>q;
	while(q--)
	{
		int tag;
		cin>>tag;
		if(tag==1)
		{
			int x,y;
			cin>>x>>y;
			a[x]=y;
			d[x]=times;
		}
		else
		{
			int x;
			cin>>x;
			f[times++]=x;
		}
	}
	for(int i=times-1;i>=0;i--)
		f[i]=max(f[i],f[i+1]);
	int fl=1;
	for(int i=1;i<=n;i++)
	{
		if(fl)
			cout<<max(a[i],f[d[i]]),fl=0;
		else cout<<" "<<max(a[i],f[d[i]]);
	}
	cout<<endl;
 	return 0;
}

