/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/20/2019 10:13:23 PM
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
bool prime[1010];
bool isprime(int n)
{
	for(int i=2;i<=sqrt(n+0.5);i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	for(int i=1;i<=1000;i++)
		prime[i]=isprime(i);
	int n,c;
	vector<int> v;
	while(cin>>n>>c)
	{
		v.clear();
		cout<<n<<" "<<c<<":";
		for(int i=1;i<=n;i++)
			if(prime[i])
				v.push_back(i);
		if(v.size()%2==0)
		{
			if(v.size()<=c*2)
				for(auto i:v)
					cout<<" "<<i;
			else
				for(unsigned i=v.size()/2-c;i<=v.size()/2+c-1;i++)
					cout<<" "<<v[i];
		}
		else
		{
			if(v.size()<=c*2-1)
				for(auto i:v)
					cout<<" "<<i;
			else
			{
				for(unsigned i=v.size()/2-c+1;i<=v.size()/2+c-1;i++)
					cout<<" "<<v[i];
			}
		}
		cout<<endl<<endl;
	}
 	return 0;
}

