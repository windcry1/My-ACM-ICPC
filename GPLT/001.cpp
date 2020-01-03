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
int a[10100],dp[10100];
vector<int> v[10100];
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+n+1,greater<int>());
	for(int i=1;i<=n;i++)
		for(int j=m;j>=a[i];j--)
		{
			if(dp[j]<=dp[j-a[i]]+a[i])
			{
				dp[j]=dp[j-a[i]]+a[i];
				v[dp[j]]=v[dp[j-a[i]]];
				v[dp[j]].push_back(a[i]);
			}
		}
	if(dp[m]==m)
	{
		int f=0;
		sort(v[m].begin(),v[m].end());
		for(auto i:v[m])
		{
			if(!f)
				cout<<i,f=1;
			else if(f)
				cout<<' '<<i;
		}
		cout<<endl;
	}
	else cout<<"No Solution"<<endl;
 	return 0;
}

