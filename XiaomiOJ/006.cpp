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
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;

int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	string s,a,b,c;
	cin>>s;
	for(int i=0;i<s.length();i++)
		if(s[i]==',')
			s[i]=' ';
	istringstream ss(s);
	ss>>a>>b>>c;
	int flag=0,j=0,k=0;
	for(int i=0;i<c.length();i++)
	{
		if(k<b.length()&&c[i]==b[k])
		{
			k++;
			c[i]=' ';
		}
	}
	for(int i=0;i<c.length();i++)
	{
		if(j<a.length()&&c[i]==a[j])
		{
			j++;
			c[i]=' ';
		}
	}
	for(int i=0;i<c.length();i++)
		if(c[i]!=' ')
			flag=1;
	if(a.length()!=j||b.length()!=k)
		flag=1;
	cout<<(flag?"false":"true");
 	return 0;
}

