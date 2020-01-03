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
	string a,b;
	cin>>a>>b;
	int flag=1,s1[256]={0},s2[256]={0};
	for(int i=0;i<a.length();i++)
		s1[a[i]]++;
	for(int i=0;i<b.length();i++)
		s2[b[i]]++;
	for(int i=0;i<256;i++)
		if(s1[i]>s2[i])
			flag=0;
	cout<<(flag?"true":"false")<<endl;
 	return 0;
}

