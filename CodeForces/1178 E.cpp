/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/21/2019 1:01:49 AM
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
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	string s;
	cin>>s;
	string res;
	int l=0,r=s.length()-1;
	while(r-l>=3)
	{
		if(s[l]==s[r]||s[l]==s[r-1])
			res+=s[l];
		else if(s[l+1]==s[r]||s[l+1]==s[r-1])
			res+=s[l+1];
		l+=2;r-=2;
	}
	cout<<res;
	if(r-l>=0)
		cout<<s[l];
	for(auto i=res.rbegin();i!=res.rend();i++)
		cout<<*i;
	cout<<endl;
 	return 0;
}

