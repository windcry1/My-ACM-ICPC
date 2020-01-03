//Author:LanceYu
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
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
struct node{
	char c;
	int n=1;
};
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	vector<node> c;
	vector<node> d;
	string a,b;
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		string::const_iterator it;
		c.clear();d.clear();
		for(it=a.begin();it<a.end();it++)
		{
			if(!c.empty()&&*it==c.back().c)
			{
				c.back().n++;
				continue;
			}
			node t;
			t.c=*it;
			c.push_back(t);
		}
		for(it=b.begin();it<b.end();it++)
		{
			if(!d.empty()&&*it==d.back().c)
			{
				d.back().n++;
				continue;
			}
			node t;
			t.c=*it;
			d.push_back(t);
		}
		if(c.size()!=d.size())
		{
			cout<<"NO"<<endl;
			continue;
		}
		int f=0;
		for(int i=0;i<c.size();i++)
		{
			if(c[i].c!=d[i].c||c[i].n>d[i].n)
			{
				cout<<"NO"<<endl;
				f=1;
				break;
			}
		}
		if(!f)
			cout<<"YES"<<endl;
	}
 	return 0;
}

