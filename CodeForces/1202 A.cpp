/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/7/2019 11:37:39 PM
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
string add(string s1,string s2)
{
	string res;
	int pre=0;
	for(auto i=s1.rbegin(),j=s2.rbegin();;)
	{
		bool flag=0;
		int t=pre;
		if(i!=s1.rend())
			t+=(*i)-'0',i++,flag=1;
		if(j!=s2.rend())
			t+=(*j)-'0',j++,flag=1;
		if(!flag)
		{
			if(t) res+=t+'0';
			break;
		}
		if(t>=2) t-=2,pre=1;
		else pre=0;
		res+=t+'0';
	}
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen(a"C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;cin>>T;
	while(T--)
	{
		string s1,s2;cin>>s1>>s2;
		string res;
		int cnt=0;
		while(true)
		{
			string temp=add(s1,s2);
			if(res==""||temp<res)
				res=temp;
			else break;
			++cnt;
			s2+='0';
		}
		cout<<cnt-1<<endl;
	}
	return 0;
}

