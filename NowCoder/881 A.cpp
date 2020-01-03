/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/18/2019 1:13:01 PM
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
const int MAX_N=1e5+10;
int a[MAX_N],b[MAX_N];
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			cin>>b[i];
		int MAX=1;
		for(int i=1;i<n;i++)
		{
			int f=0;
			for(int j=i-1;j>=0;j--)
			{
				if(a[j]<a[i]&&b[j]<b[i]||a[j]>a[i]&&b[j]>b[i])
				{
					MAX=i+1;
					break;
				}
				if(a[j]<a[i]&&b[j]>b[i]||a[j]>a[i]&&b[j]<b[i])
				{
					f=1;
					break;
				}
			}
			if(f)
				break;
		}
		cout<<MAX<<endl;
	}
 	return 0;
}

