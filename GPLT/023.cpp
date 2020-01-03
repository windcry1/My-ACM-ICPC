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
#include<list>
#include<unordered_map>
#include<unordered_set>
#define ll long long
#define ull unsigned long long
using namespace std;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
inline char change(int x)
{
	if(x==0)
		return 'G';
	if(x==1)
		return 'P';
	if(x==2)
		return 'L';
	if(x==3)
		return 'T';
}
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	string s;
	cin>>s;
	for(auto i=s.begin();i!=s.end();i++)
		*i=toupper(*i);
	vector<char> v[4];
	for(auto i:s)
	{
		if(i=='G')
			v[0].push_back(i);
		if(i=='P')
			v[1].push_back(i);
		if(i=='L')
			v[2].push_back(i);
		if(i=='T')
			v[3].push_back(i);
	}
	int cnt[4]={0};
	int f=0;
	while(!f)
	{
		f=1;
		for(int i=0;i<4;i++)
			if(!v[i].empty())
			{
				cout<<change(i);
				v[i].pop_back();
				f=0;
			}
	}
 	return 0;
}

