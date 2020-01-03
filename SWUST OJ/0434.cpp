/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/12/2019 6:02:58 PM
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
	for(string::reverse_iterator i=s1.rbegin(),j=s2.rbegin();;)
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
		if(t>=10) t-=10,pre=1;
		else pre=0;
		res+=t+'0';
	}
	reverse(res.begin(),res.end());
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int a,b;
	cin>>a>>b;
	string s1,s2;
	char c;
	while(a--) cin>>c,s1+=c;
	while(b--) cin>>c,s2+=c;
	cout<<add(s1,s2)<<endl;
	return 0;
}

