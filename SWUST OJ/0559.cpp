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
bool cmp(string s1,string s2)
{
	if(s1.length()<s2.length())
		return true;
	else if(s1.length()==s2.length()&&s1<s2)
		return true;
	return false;
}
bool cmp1(string s1,string s2)
{
	return s1<s2;
}
int main()
{
	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	string s[10001];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>s[i];
	sort(s,s+n,cmp);
	for(int i=0;i<n;i++)
	{
		if(i!=n-1)
			cout<<s[i]<<' ';
		else cout<<s[i]<<endl;
	}
	sort(s,s+n,cmp1);
	for(int i=0;i<n;i++)
	{
		if(i!=n-1)
			cout<<s[i]<<' ';
		else cout<<s[i]<<endl;
	}
	return 0;
}

