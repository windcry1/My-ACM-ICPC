//Author:LanceYu
#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<cctype>
#include<vector>
#include<cstdlib>
#include<queue>
#include<set>
#include<ctime>
#include<algorithm>
#include<complex>
#include<cmath>
#include<stack>
#include<bitset>
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=2147483647;
const int mod=1e9+7;

int main()
{
	//ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	char c;
	stack<int> st;
	int temp=0,a,b;
	while(1)
	{
		cin>>c;
		if(c=='#')
		{
			cout<<st.top();
			return 0;
		}
		if(isdigit(c))
			st.push(c-'0');
		else
		{
			b=st.top();st.pop();
			a=st.top();st.pop();
			if(c=='/')
				st.push(a/b);
			else if(c=='+')
				st.push(a+b);
			else if(c=='-')
				st.push(a-b);
			else if(c=='*')
				st.push(a*b);
		}
	}
	return 0;
}

