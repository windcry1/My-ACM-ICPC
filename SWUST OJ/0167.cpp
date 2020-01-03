/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/9/2019 5:06:37 PM
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
map<char,char> ma;
char find(char c)
{
	return ma[c]==c?c:find(ma[c]);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;cin>>T;
	while(T--)
	{
		ma.clear();
		set<char> v;
		for(int i=0;i<26;i++)
			ma[(char)(i+'a')]=(char)(i+'a');
		int n;cin>>n;
		while(n--)
		{
			string s;
			cin>>s;
			char t1=s[0],t2=s[2];
			v.insert(t1);
			ma[t1]=find(t2);
		}
		int f=0;
		for(set<char>::iterator i=v.begin();i!=v.end();i++)
		{
			if(ma[*i]=='a')
				cout<<(f?" ":(*i=='a'?"":"a "))<<*i,f=1;
		}
		cout<<(f?"":"none")<<endl;
	}
	return 0;
}

