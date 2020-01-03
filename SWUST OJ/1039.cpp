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
	string s,str1,str2,str3;
	cin>>s;
	int len=s.length();
	for(int i=0;i<len;i++)
	{
		if(isdigit(s[i]))
			str1+=s[i];
		else if(isalpha(s[i]))
			str2+=s[i];
		else
			str3+=s[i];
	}
	cout<<str1<<'\n'<<str2<<'\n'<<str3<<endl;
	return 0;
}

