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
	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	string s,str1,str2;
	cin>>s;
	int len=s.length();
	int flag=0;
	for(int i=0;i<len;i++)
	{
		if(s[i]=='@'&&!flag)
		{
			s[i]=' ';
			flag=1;
		}
		if(flag==1&&s[i]=='@')
		{
			cout<<"no!";
			return 0;
		}
		if(s[i]=='#')
		{
			s[i]=' ';
			break;
		}
	}
	istringstream ss(s);
	ss>>str1>>str2;
	int len1=str1.length();
	int len2=str2.length();
	if(len1!=len2)
	{
		cout<<"no!";
		return 0;
	}
	for(int i=0;i<len1;i++)
	{
		if(str1[i]!=str2[len1-1-i])
		{
			cout<<"no!";
			return 0;
		}
	}
	cout<<"yes!";
	return 0;
}

