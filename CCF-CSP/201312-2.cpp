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
#include<array>
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
	string s,str;
	cin>>s;
	int sum=0;
	int lens=s.length();
	for(int i=0;i<lens;i++)
	{
		if(s[i]!='-')
			str+=s[i];
	}
	int len=str.length();
	for(int i=0;i<len-1;i++)
		sum+=(i+1)*(str[i]-'0'); 
	sum%=11;
	if(sum==10&&s[lens-1]!='X')
	{
		s[lens-1]='X';
		cout<<s<<endl;
	}
	else if(sum==10&&s[lens-1]=='X')
		cout<<"Right"<<endl;
	else if(sum==s[lens-1]-'0')
		cout<<"Right"<<endl;
	else if(sum!=s[lens-1]-'0')
	{
		s[lens-1]=sum+'0';
		cout<<s<<endl;
	}
	return 0;
}

