/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/7/2019 5:31:51 PM
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
int a[10100],temp[10100];
bool check(int n)
{
	for(int i=1;i<n;i++)
		if(a[i]!=a[0]||a[i]%2!=0)
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
	int n;while(cin>>n&&n)
	{
		for(int i=0;i<n;i++) cin>>a[i];
		int cnt=0;
		while(true)
		{
			for(int i=0;i<n;i++)
			{
				if(a[i]%2) ++a[i];
				a[i]/=2;
				temp[i]=a[i];
			}
			for(int i=0;i<n;i++)
				a[i]+=temp[(i-1+n)%n];
			if(check(n))
			{
				cout<<cnt<<" "<<a[0]<<endl;
				break;
			}
			++cnt;
		}
	}
	return 0;
}

