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
	string s;
	int a[10];
	while(cin>>s)
	{
		memset(a,0,sizeof(a));
		int len=s.length();
		for(int i=0;i<len;i++)
			a[s[i]-'0']++;
		for(int i=0;i<10;i++)
			if(a[i])
				cout<<i<<':'<<a[i]<<endl;
	}
	return 0;
}

