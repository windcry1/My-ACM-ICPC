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
int n;
struct node{
	string s;
	char last='\0';
	int num=0;
}x[100010];
struct s2{
	string s1,s2;
}temp2,temp3;
struct s1{
	string s1,s2;
}temp1;
vector<node> v[100010][6];
vector<int> m;
vector<s2> sp2;
vector<s1> sp1;
set<int> s;
int change(char c)
{
	if(c=='a')return 0;
	if(c=='e')return 1;
	if(c=='i')return 2;
	if(c=='o')return 3;
	if(c=='u')return 4;
	return 5;
}
void find(int p)
{
	string::iterator it;
	int res=0;
	for(it=x[p].s.begin();it<x[p].s.end();it++)
		if(*it=='a'||*it=='e'||*it=='i'||*it=='o'||*it=='u')
		{
			res++;
			x[p].last=*it;
		}
	x[p].num=res;
	v[res][change(x[p].last)].push_back(x[p]);
	if(s.find(res)==s.end())
	{ 
		m.push_back(res);
		s.insert(res);
	}
}
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x[i].s;
		find(i);
	}
	ll total=0;
	string s1,s2,s3,s4;
	for(int i=0;i<m.size();i++)
	{
		for(int j=0;j<5;j++)
		{
			total+=v[m[i]][j].size()/2;// 满足最后一个是 并且元音总数相同
			while(v[m[i]][j].size()>=2)
			{
				temp2.s1=v[m[i]][j].back().s;
				v[m[i]][j].pop_back();
				temp2.s2=v[m[i]][j].back().s;
				v[m[i]][j].pop_back();
				sp2.push_back(temp2);
			}
		}
	}
	for(int i=0;i<m.size();i++)
	{
		int p=0;
		for(int j=0;j<6;j++)
		{
			while(!v[m[i]][j].empty())
			{
				if(p==0)
				{
					temp1.s1=v[m[i]][j].back().s;
					p=1;
					v[m[i]][j].pop_back();
				}
				else if(p==1)
				{
					p=0;
					temp1.s2=v[m[i]][j].back().s;
					v[m[i]][j].pop_back();
					sp1.push_back(temp1);
				}
			}
		}
	}
	//cout<<sp1.size()<<endl;
	//cout<<sp2.size()<<endl;
	if(sp1.size()<sp2.size())
		cout<<sp1.size()+(sp2.size()-sp1.size())/2<<endl;
	else cout<<sp2.size()<<endl;
	while(!sp2.empty()&&!sp1.empty())
	{
		cout<<sp1.back().s1<<" "<<sp2.back().s1<<endl;
		cout<<sp1.back().s2<<" "<<sp2.back().s2<<endl;
		sp1.pop_back();sp2.pop_back();
	}
	while(sp2.size()>=2)
	{
		temp2=sp2.back();
		sp2.pop_back();
		temp3=sp2.back();
		sp2.pop_back();
		cout<<temp2.s1<<" "<<temp3.s1<<endl;
		cout<<temp2.s2<<" "<<temp3.s2<<endl;
	}
 	return 0;
}

