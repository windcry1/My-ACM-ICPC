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
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=2147483647;
const int mod=1e9+7;

int main()
{
	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	string s;
	stack<char> st;
	cin>>s;
	int len=s.length();
	for(int i=0;i<len;i++)
	{
		if(s[i]=='('||s[i]=='[')
			st.push(s[i]);
		else
		{
			if(st.empty())
			{
				cout<<"NO";
				return 0;
			}
			if(s[i]==')'&&st.top()!='(')
			{
				cout<<"NO";
				return 0;
			}
			else if(s[i]==']'&&st.top()!='[')
			{
				cout<<"NO";
				return 0;
			}
			else st.pop();
		}
	}
	cout<<"YES";
	return 0;
}

