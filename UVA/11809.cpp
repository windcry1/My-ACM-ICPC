//Author:LanceYu
#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<fstream>
#include<sstream>
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
const double clf=1e-9;
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
	double hashf[10][31],t;//保存科学记数法前面的部分 
	ll hashz[10][31];//保存e后面的 
	string s;
	for(int i=0;i<10;i++)
	{
		for(int j=1;j<=30;j++)
		{
			t=log10(1-pow(2,-i-1))+(pow(2,j)-1)*log10(2);
			hashz[i][j]=t;
			hashf[i][j]=pow(10,t-hashz[i][j]);
		}
	}
	while(cin>>s&&s!="0e0")
	{
		for(int i=0;i<s.length();i++)
			if(s[i]=='e')
				s[i]=' ';
		istringstream ss(s);
		double a;int b;
		ss>>a>>b;
		int flag=0;
		for(int i=0;i<10;i++)
		{
			for(int j=1;j<=30;j++)
			{
				if(b==hashz[i][j]&&(fabs(a-hashf[i][j])<1e-4||fabs(a/10-hashf[i][j])<1e-4))
				{
					printf("%d %d\n",i,j);
					break;
				}
			}
		}
	}
	return 0;
}

