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
const int MMAX=2147483647;
const int mod=1e9+7;

int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	char c;
	cin>>n>>c;
	string s;
	cin.ignore();
	getline(cin,s);
	int len=s.length();
	if(len>=n)
	{
		for(int i=len-n;i<len;i++)
			cout<<s[i];
	}
	else
	{
		for(int i=0;i<n-len;i++)
			cout<<c;
		cout<<s;
	}
	cout<<endl;
 	return 0;
}

