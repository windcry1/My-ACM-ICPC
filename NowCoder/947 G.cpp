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
//ll power(ll a,ll b)
//{
//	ll res=1;
//    while(b)
//    {
//        if(b&1) res=res*a%mod;
//        b>>=1;
//        a=a*a%mod;
//    }
//    return res;
//}
struct node{
	char a,b;
	bool operator <(const node &a)const
	{
		return this->a<a.a&&this->b<a.b;
	}
};
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	char c[4][4];
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			cin>>c[i][j];
	set<char> s1,che;
	vector<node> s2;
	int res=0;
	for(int i=0;i<3;i++)
	{
		che.clear();
		for(int j=0;j<3;j++)
			che.insert(c[i][j]);
		if(che.size()==1)
			s1.insert(*che.begin());
		if(che.size()==2)
		{
			node t;
			set<char>::const_iterator it=che.begin();
			t.a=*it;
			it++;
			t.b=*it;
			s2.push_back(t);
		}
	}
	for(int i=0;i<3;i++)
	{
		che.clear();
		for(int j=0;j<3;j++)
			che.insert(c[j][i]);
		if(che.size()==1)
			s1.insert(*che.begin());
		if(che.size()==2)
		{
			node t;
			set<char>::const_iterator it=che.begin();
			t.a=*it;
			it++;
			t.b=*it;
			s2.push_back(t);
		}
	}
	che.clear();
	for(int i=0;i<3;i++)
		che.insert(c[i][i]);
	if(che.size()==1)
		s1.insert(*che.begin());
	if(che.size()==2)
	{
		node t;
		set<char>::const_iterator it=che.begin();
		t.a=*it;
		it++;
		t.b=*it;
		s2.push_back(t);
	}
	che.clear();
	for(int i=0;i<3;i++)
		che.insert(c[2-i][i]);
	if(che.size()==1)
		s1.insert(*che.begin());
	if(che.size()==2)
	{
		node t;
		set<char>::const_iterator it=che.begin();
		t.a=*it;
		it++;
		t.b=*it;
		s2.push_back(t);
	}
	if(!s2.empty())
	{
		sort(s2.begin(),s2.end());
		for(int i=0;i<s2.size()-1;i++)
			if(s2[i].a==s2[i+1].a&&s2[i].b==s2[i+1].b)
			{
				s2.erase(s2.begin()+i+1);
				i--;
			}
	}
	cout<<s1.size()<<endl;
	cout<<s2.size()<<endl;
 	return 0;
}

