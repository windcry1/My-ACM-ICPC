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
	string s,t,str;
	int num=0;
	cin>>s;
	str=s;
	int len=s.length();
	for(int i=0;i<len;i++)
	{
		if(s[i]=='(')
		{
			for(int j=i;j<len;j++)
			{
				if(s[j]==')')
				{
					s[i]='0';
					s[j]='0';
					break;
				}
			}
		}
	}
	for(int i=0;i<len;i++)
	{
		if(s[i]=='(')
			str+=")";
		else if(s[i]==')')
		{
			t="(";
			t+=str;
			str=t;
		}
	}
	cout<<str<<endl;
	return 0;
}

