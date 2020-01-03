//Author: WindCry1
//Mail: lanceyu120@gmail.com
//Website: https://windcry1.com
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
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
int s[300100];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>s[i];
	sort(s+1,s+1+n);
	vector<int> v;
	v.push_back(s[1]);
	int i;
	for(i=2;i<n;i+=2)
	{
		v.push_back(s[i]);
		v.insert(v.begin(),s[i+1]);
	}
	bool flag=true;
	if(i==n)
	{
		v.push_back(s[n]);
	}
	for(int i=1;i<v.size()-1;i++)
	{
		if(v[i]>=v[i-1]+v[i+1])
			flag=false;
		if(!flag)
			break;
	}
	if(v[0]>=v[1]+v[v.size()-1]||v[v.size()-1]>=v[v.size()-2]+v[0])
		flag=false; 
	if(flag)
	{
		cout<<"YES\n";
		for(int i=0;i<v.size();i++)
			cout<<v[i]<<" ";
		return 0;
	}
	if(!flag)
		cout<<"NO\n";
 	return 0;
}

