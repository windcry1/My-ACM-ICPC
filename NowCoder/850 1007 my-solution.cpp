/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/29/2019 1:24:21 PM
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
map<int,int> ma;
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;
	cin>>T;
	while(T--)
	{
		ma.clear();
		int n,m; 
		cin>>n>>m;
		for(int i=1;i<=n;i++)
		{
			int x,s=0,ans=0;
			cin>>x;
			for(auto j:ma){
				if(s+j.second*j.first<=m-x)
				{
					s+=j.first*j.second;
					ans+=j.second;
					continue;
				}
				ans+=(m-x-s)/j.first;
				break;
			}
			cout<<i-1-ans<<(i==n?'\n':' ');
			++ma[x];
		}
	}
 	return 0;
}

