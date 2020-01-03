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
	int n,t,i;
	vector<int> a[22];
	cin>>n;
	while(n--)
	{
		cin>>t;
		for(i=0;i<20;i++)
		{
			if(5-a[i].size()>=t)
			{
				for(int j=1;j<=t;j++)
				{
					a[i].push_back(j);
					if(j!=t)
						cout<<i*5+a[i].size()<<' ';
					else
						cout<<i*5+a[i].size()<<endl;
				}
				break;
			}
		}
		if(i==20)
		{
			int j=0;
			for(i=0;i<20;i++)
			{
				while(a[i].size()!=5&&j!=t)
				{
					a[i].push_back(j);
					if(j!=t-1)
						cout<<i*5+a[i].size()<<' ';
					else
						cout<<i*5+a[i].size()<<endl;
					j++;
				}
			}
		}
	}
	return 0;
}

