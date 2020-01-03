/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/29/2019 12:44:03 PM
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
bool isprime(ull x)
{
	for(ull i=2;i<=sqrt(x);i++)
		if(x%i==0)
			return false;
	return true;
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
	while(n--)
	{
		ull t,temp;
		cin>>t;
		for(ull i=t-2;i>2;i-=2)
		{
			if(isprime(i))
			{
				temp=i;
				break;
			}
		}
		ull p=temp%64;
		ull res=1;
		for(ull i=temp;i>=temp-p;i--)
			res*=i,res%=t;
		cout<<res<<endl;
	}
 	return 0;
}

