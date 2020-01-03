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
	int n;
	cin>>n;
	stack<int> q;
	string s;
	int t;
	while(n--)
	{
		cin>>s;
		if(s=="Push")
		{
			cin>>t;
			if(!q.empty())
			t=max(t,q.top());
			q.push(t);
		}
		else if(s=="Query")
			cout<<q.top()<<endl;
		else if(s=="Pop")
			q.pop();
	}
 	return 0;
}

