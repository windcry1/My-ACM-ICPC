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
int f(int n)
{
	int res=0;
	while(n!=0)
	{
		res+=n%10;
		n/=10;
	}
	return res;
}
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","w",stdout);
	freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","r",stdin);
	int n;
	while(cin>>n)
	{
		for(int i=n;;i++)
		{
			if(f(i)%4==0)
			{
				cout<<i<<"\n";
				break;
			}
		}
	}
 	return 0;
}

