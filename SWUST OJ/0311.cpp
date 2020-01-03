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
	int n,a,b;
	char c;
	cin>>n;
	while(n--)
	{
		cin>>a>>c>>b;
		if(c=='+')
			cout<<a<<c<<b<<'='<<a+b<<endl;
		if(c=='-')
			cout<<a<<c<<b<<'='<<a-b<<endl;
		if(c=='*')
			cout<<a<<c<<b<<'='<<a*b<<endl;
		if(c=='/')
			cout<<a<<c<<b<<'='<<a/b<<endl;
	}
	return 0;
}

