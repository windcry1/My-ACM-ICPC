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
	int n;
	cin>>n;
	string s;
	char t[1001];
	cin>>s;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			for(int j=i-1;j>=0;j--)
				t[i-j-1]=s[j];
			for(int j=0;j<=i-1;j++)
				s[j]=t[j];
		}
	}
	cout<<s;
 	return 0;
}

