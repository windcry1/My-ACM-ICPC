/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/6/2019 6:46:56 PM
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
int main()
{
	//ios::sync_with_stdio(false);
	//cin.tie(0);
	//cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	string s;
	while(cin>>s&&s!="0")
	{
		ll t=0;
		for(unsigned i=0;i<s.size();i++)
			t+=s[i]-'0';
		if(t>=1&&t<=9)
		{
			cout<<t<<endl;
			continue;
		}
		ll res;
		char str[10010];
		while(true)
		{
			res=0;
			while(t!=0)
			{
				res+=t%10;
				t/=10;
			}
			sprintf(str,"%lld",res);
			if(strlen(str)==1)
				break;
			t=res;
		}
		cout<<str<<endl;
	}
	return 0;
}

