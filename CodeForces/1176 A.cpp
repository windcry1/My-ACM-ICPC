//Author:LanceYu
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
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;

int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	ll T;
	cin>>T;
	while(T--)
	{
		ll n;
		cin>>n;
		ll cnt1=0,cnt2=0,cnt3=0;
		while(n%2==0)
		{
			n/=2;
			cnt1++;
		}
		while(n%3==0)
		{
			n/=3;
			cnt2++;
		}
		while(n%5==0)
		{
			n/=5;
			cnt3++;
		}
		if(n!=1)
		{
			cout<<"-1"<<endl;
			continue;
		}
		else
			cout<<cnt1+2*cnt2+3*cnt3<<endl;
	}
 	return 0;
}

