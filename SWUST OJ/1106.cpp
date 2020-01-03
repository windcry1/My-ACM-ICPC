/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/5/2019 11:10:57 PM
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
int a[1010];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,t;cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++) cin>>t,v.push_back(t);
	vector<int>::reverse_iterator ri=v.rbegin();
	vector<int>::iterator i=v.begin();
	list<int> res;
	res.push_back(v[0]);
	int cnt=0;
	while(true)
	{
		if(*ri<v[0]) res.push_front(*ri);
		if(*i<v[0]) res.push_front(*i);
		if(*ri>v[0]) res.push_back(*ri);
		if(*i>v[0]) res.push_back(*i);
		i++,ri++;cnt+=2;
		if() break;
	}
	for(list<int>::iterator i=res.begin();i!=res.end();i++)
		cout<<*i<<" ";
	return 0;
}

