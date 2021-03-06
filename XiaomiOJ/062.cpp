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

int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	char c;
	stack<char> s;
	string t;
	cin>>t;
	istringstream ss(t);
	while(ss>>c)
	{
		if(s.size()==0)
		{
			s.push(c);
			continue;
		}
		if(c=='('||c=='['||c=='{')
			s.push(c);
		else if(c==')')
		{
			if(s.top()=='(')
				s.pop();
			else s.push(c);
		}
		else if(c==']')
		{
			if(s.top()=='[')
				s.pop();
			else s.push(c);
		}
		else if(c=='}')
		{
			if(s.top()=='{')
				s.pop();
			else s.push(c);
		}
	}
	if(s.size()==0)
		cout<<"1";
	else
		cout<<"0";
 	return 0;
}

