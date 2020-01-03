/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/7/2019 5:06:52 PM
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
	int T;cin>>T;
	while(T--)
	{
		list<int> l;
		int n;cin>>n;
		int t;
		for(int i=1;i<=2*n;i++) {
			cin>>t;l.push_back(t);
		}
		char c;
		for(int i=0;i<n;i++)
		{
			cin>>c;
			if(c=='L')
			{
				int t1=l.front();l.pop_front();
				int t2=l.front();l.pop_front();
				int t3=l.back();l.pop_back();
			}
			if(c=='R')
			{
				int t1=l.back();l.pop_back();
				int t2=l.back();l.pop_back();
				int t3=l.front();l.pop_front();
			}
		}
		cout<<endl;
	}
	return 0;
}

