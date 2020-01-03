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
	string s;
	char a[1001];
	int n,j=0;
	cin>>s>>n;
	for(int i=s.length()-n-1;i<s.length();i++)
	{
		for(int j=0;j<s.length()-n-1;j++)
		{
			if(s[j]<s[i])
			{
				swap(s[i],s[j]);
			}
		}
	}
	for(int i=s.length()-n-1;i<s.length();i++)
		cout<<s[i];
 	return 0;
}

