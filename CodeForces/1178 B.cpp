/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/21/2019 12:07:13 AM
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
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	string s;
	cin>>s;
	ll cnt1=0,cnt2=0;
	ll ans=0;
	for(auto i=s.begin();i!=s.end()-1;i++)
	{
		if(*i=='v'&&*(i+1)=='v')
			++cnt2;
	}
	for(auto i=s.begin();i!=s.end()-1;i++)
	{
		if(*i=='v'&&*(i+1)=='v')
			++cnt1,--cnt2;
		if(*i=='o')
			ans+=cnt1*cnt2;
	}
	cout<<ans<<endl;
 	return 0;
}

