/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/21/2019 12:22:32 AM
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
int du[1010];
bool isprime(int n)
{
	for(int i=2;i<=sqrt(n+0.5);i++)
		if(n%i==0)
			return false;
	return true;
}
void init()
{
	for(int i=1;i<=1009;i++)
		prime[i]=isprime(i);
}
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	init();
	cin>>n;
	int t=0;
	for(int i=n;;i++)
		if(prime[i])
		{
			t=i;
			break;
		}
	for(int i=1;i<=n;i++)
		du[i]=2;
	cout<<t<<endl;
	for(int i=0;i<n-1;i++)
		cout<<i+1<<" "<<i+2<<endl;
	cout<<"1 "<<n<<endl;
	int cnt=t-n;
	for(int i=1;i<=n-2;i++)
	{
		if(!cnt)
			break;
		for(int j=i+2;j<=n;j++)
		{
			if(du[i]==2&&du[j]==2)
			{
				du[i]++;
				du[j]++;
				cout<<i<<" "<<j<<endl;
				cnt--;
				break;
			}
		}
		if(!cnt)
			break;
	}
 	return 0;
}

