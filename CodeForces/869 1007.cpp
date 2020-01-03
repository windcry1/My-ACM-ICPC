/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/23/2019 11:41:48 AM
*************************************************************************/
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
#include<map>
#include<algorithm>
#include<complex>
#include<stack>
#include<bitset>
#include<iomanip>
#include<list>
#if __cplusplus >= 201103L
#include<unordered_map>
#include<unordered_set>
#endif
#define ll long long
#define ull unsigned long long
using namespace std;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
string s[11][1<<11];
string f(string res)
{
	for(auto &i:res)
		if(i=='C')
			i='P';
		else if(i=='P')
			i='C';
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;cin>>T;
	s[1][0]="CC";s[1][1]="PC";
	for(int i=2;i<=10;i++)
	{
		int size = pow(2,i-1);
		int cnt=0;
		for(int j=0;j<size;j++)
			s[i][cnt++] = s[i-1][j]+s[i-1][j];
		for(int j=0;j<size;j++)
			s[i][cnt++] = f(s[i-1][j])+s[i-1][j];
	}
	while(T--)
	{
		int n;cin>>n;
		int size = pow(2,n);
		for(int i=0;i<size;i++)
			cout<<s[n][i]<<endl;
	}
	return 0;
}

