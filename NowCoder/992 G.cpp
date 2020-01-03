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
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
vector<int> v[3]; 
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='O')
			v[0].push_back(i);
		else if(s[i]=='R')
			v[1].push_back(i);
		else if(s[i]=='Z')
			v[2].push_back(i);
	}
	ll res=0;
	for(auto i:v[1])
	{
		auto a1=lower_bound(v[0].begin(),v[0].end(),i),a2=lower_bound(v[2].begin(),v[2].end(),i);
		res+=1LL*(a1-v[0].begin())*1LL*(v[2].end()-a2);
	}
	cout<<res<<endl;
 	return 0;
}

