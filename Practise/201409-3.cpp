//Author:LanceYu
#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<fstream>
#include<iosfwd>
#include<vector>
#include<cstdlib>
#include<cctype>
#include<queue>
#include<set>
#include<ctime>
#include<algorithm>
#include<complex>
#include<cmath>
#include<array>
#include<stack>
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
	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	string s,str,t;
	int flag,n;
	cin>>s>>flag>>n;
	if(!flag)
	{
		for(int i=0;i<s.length();i++)
			s[i]=tolower(s[i]);
		while(n--)
		{
			cin>>str;
			t=str;
			for(int i=0;i<str.length();i++)
				str[i]=tolower(str[i]);
			if(str.find(s)!=string::npos)
				cout<<t<<endl;
		}
	}
	else
	{
		while(n--)
		{
			cin>>str;
			if(str.find(s)!=string::npos)
				cout<<str<<endl;
		}
	}
	return 0;
}

