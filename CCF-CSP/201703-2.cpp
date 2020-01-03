//Author:LanceYu
#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<fstream>
#include<iosfwd>
#include<vector>
#include<cstdlib>
#include<queue>
#include<set>
#include<ctime>
#include<algorithm>
#include<complex>
#include<cmath>
#include<array>
#include<valarray>
#include<bitset>
#define ll long long
using namespace std;
const double clf=1e-8;
//const double e=2.718281828;
const double PI=3.141592653589793;
const int MMAX=2147483647;
const int mod=1e9+7;
//priority_queue<int>p;
//priority_queue<int,vector<int>,greater<int> >pq;

int main()
{
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,m,x,y,t;
	vector<int> a; 
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
		a.push_back(i);
	while(m--)
	{
		scanf("%d%d",&x,&y);
		for(int i=0;i<a.size();i++)
		{
			if(a[i]==x)
			{
				t=i;
				break;
			}
		}
		if(y>0)
		{
			if(t+y>=0&&t+y<a.size())
				a.insert(a.begin()+t+y+1,x);
			else if(t+y<0)
				a.insert(a.begin(),x);
			else if(t+y>a.size())
				a.insert(a.begin()+a.size(),x);
			a.erase(a.begin()+t);
		}
		else
		{
			if(t+y>=0&&t+y<a.size())
				a.insert(a.begin()+t+y,x);
			else if(t+y<0)
				a.insert(a.begin(),x);
			else if(t+y>a.size())
				a.insert(a.begin()+a.size(),x);
			a.erase(a.begin()+t+1);
		}
	}
	for(int i=0;i<a.size();i++)
	{
		if(i!=a.size()-1)
			printf("%d ",a[i]);
		else
			printf("%d\n",a[i]);
	}
	return 0;
}

