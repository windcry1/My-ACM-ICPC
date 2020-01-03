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
struct node{
	int hz=0,ori;
}x[10001];
bool cmp(const node a,const node b)
{
	return a.hz>b.hz;
}
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	string s;
	cin>>s;
	int i=0,n,t;
	for(int i=0;i<10001;i++)
		x[i].ori=i;
	for(int i=0;i<s.length();i++)
		if(s[i]==',')
			s[i]=' ';
	istringstream ss(s);
	while(ss>>t)
		x[t].hz++;
	sort(x,x+10001,cmp);
	cin>>t;
	for(int i=0;i<t;i++)
	{
		if(i==0)cout<<x[i].ori;
		else cout<<","<<x[i].ori;
	}
 	return 0;
}

