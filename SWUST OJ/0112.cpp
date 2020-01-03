/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/9/2019 6:58:00 PM
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
	int n;cin>>n;
	for(int k=1;k<=n;k++)
	{
		int h,m,s;
		char t;
		cin>>h>>t>>m>>t>>s;
		cout<<k<<" ";
		int ht=h,mt=m,st=s;
		for(int i=32;i>=1;i/=2)
		{
			if(ht>=i) cout<<1,ht-=i;
			else cout<<0;
			if(mt>=i) cout<<1,mt-=i;
			else cout<<0;
			if(st>=i) cout<<1,st-=i;
			else cout<<0;
		}
		cout<<" "<<bitset<6>(h)<<bitset<6>(m)<<bitset<6>(s)<<endl;
	}
	return 0;
}

