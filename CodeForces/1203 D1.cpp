/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/13/2019 11:49:23 PM
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
string s1,s2;
vector<int> p;
int MAX=0;
void dfs(int now,int pos)
{
	if(pos==s2.length())
	{
		p.push_back(s1.length());
		for(unsigned i=0;i<p.size()-1;i++)
			MAX=max(MAX,p[i+1]-p[i]-1);
		p.pop_back();
	}
	int n=s1.length();
	for(int i=now+1;i<n;i++)
	{
		if(s2[pos]==s1[i])
		{
			p.push_back(i);
			dfs(i,pos+1);
			p.pop_back();
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	cin>>s1>>s2;
	p.push_back(-1);
	dfs(-1,0);
	cout<<MAX<<endl; 
	return 0;
}

