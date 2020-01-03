/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/7/2019 4:38:04 PM
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
//#define int long int
using namespace std;
typedef pair<int,int> pii;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
map<int,int> ma;
bool isprime(int n)
{
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return false;
	return true;
}
main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;cin>>n;
	int temp=n;
	if(isprime(temp))
	{
		cout<<temp<<"="<<temp<<endl;
		return 0;
	}
	for(int i=2;i<=sqrt(temp);i++)
		while(n%i==0)
		{
			if(i!=temp/i) ++ma[i];
			++ma[temp/i],n/=i;
		}
	cout<<temp<<"=";
	int first=0;
	for(auto i:ma)
	{
		if(i.second>=2)
			cout<<(first==0?"":"*")<<i.first<<"^"<<i.second,first=1;
		else if(i.second==1)cout<<(first==0?"":"*")<<i.first,first=1;
	}
	cout<<endl;
	return 0;
}

