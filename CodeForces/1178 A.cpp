/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/20/2019 11:36:22 PM
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
int a[110];
int dp[110];
bool vis[110][110]; 
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,sum=0;
	cin>>n;
	vector<int> v;
	vector<int> temp;
	for(int i=0;i<n;i++)
		cin>>a[i],sum+=a[i];
	int res=a[0];
	v.push_back(0);
	for(int i=1;i<n;i++)
		if(a[i]<=a[0]/2)
		{
			v.push_back(i);
			res+=a[i];
		}
	if(res>sum/2)
	{
		cout<<v.size()<<endl;
		for(auto i:v)
			cout<<i+1<<" ";
		cout<<endl;
	}
	else cout<<"0"<<endl;
 	return 0;
}

