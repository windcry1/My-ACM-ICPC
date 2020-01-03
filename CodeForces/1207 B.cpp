/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/22/2019 10:45:48 PM
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
int a[52][52],b[52][52];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,m;cin>>n>>m;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>a[i][j];
	vector<pii> v;
	for(int i=0;i<n-1;i++)
		for(int j=0;j<m-1;j++)
		{
			if(a[i][j]&&a[i+1][j]&&a[i+1][j+1]&&a[i][j+1])
				v.emplace_back(i,j),b[i][j]=1,b[i+1][j]=1,b[i][j+1]=1,b[i+1][j+1]=1;
		}
	bool f=true;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		{
			if(a[i][j]!=b[i][j])
				f=false;
		}
	cout<<(f?(int)v.size():-1)<<endl;
	if(f)
		for(auto i:v)
			cout<<i.first+1<<" "<<i.second+1<<endl;
	return 0;
}

