/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/5/2019 2:23:22 PM
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
ll a[100010];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	ll n;cin>>n;
	ll res=0;
	ll MAX=0,pos,tot=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>MAX)
		{
			MAX=a[i];
			pos=i;
		}
		tot+=a[i];
	}
	for(int i=0;i<n;i++)
		if(i!=pos)
			res+=a[i];
	if(res<MAX||tot%2==1)
		cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
	return 0;
}

