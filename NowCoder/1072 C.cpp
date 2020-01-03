/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/11/2019 3:41:30 PM
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
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
string s="0123456789ABCDEFGHIJKLMN";
void solve(int n,int mod)
{
	cout<<n<<"=";
	if(n==0) cout<<"0(base"<<mod<<")"<<endl,exit(0);
	vector<int> v;
	v.clear();
	while(n) {
		if(n<0&&n%mod!=0) v.push_back(n-(n/mod+1)*mod),n=n/mod+1;
		else v.push_back(n%mod),n/=mod;
	}
	for(auto i=v.rbegin();i!=v.rend();i++)
		cout<<s[*i];
	cout<<"(base"<<mod<<")"<<endl;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,mod;cin>>n>>mod;
	solve(n,mod);
	return 0;
}

