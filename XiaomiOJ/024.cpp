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
int a[100001];
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++)
		if(s[i]==',')
			s[i]=' ';
	istringstream ss(s);
	int i=0;
	while(ss>>a[i++]);
	int n=--i;
	sort(a,a+n);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	int sum1=0,sum2=0;
	for(int i=0;i<n;i++)
		sum2+=a[i];
	int flag=0;
	for(int i=0;i<n;i++)
	{
		sum1+=a[i];
		sum2-=a[i];
		if(sum1==sum2)
			flag=1;
	}
	cout<<(flag?"true":"false");
 	return 0;
}

