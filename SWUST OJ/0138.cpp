/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/5/2019 9:27:46 PM
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
const int mod=1e9+7;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,p;
	string s;
	cin>>n>>s>>p;
	s+=s;
	string temp;
	vector<string> v;
	for(unsigned i=0;i<s.length()/2;i++)
	{
		temp=s.substr(i,s.length()/2);
		v.push_back(temp);
	}
	sort(v.begin(),v.end());
	return 0;
}

