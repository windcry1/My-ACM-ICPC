/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/13/2019 11:05:56 PM
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
bool flag[200010];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;cin>>n;
	int t;
	for(int i=0;i<n;i++)
	{
		cin>>t;
		if(!flag[t])
			flag[t]=true;
		else if(t!=1&&!flag[t-1])
			flag[t-1]=true;
		else if(!flag[t+1])
			flag[t+1]=true;
	}
	int cnt=0;
	for(int i=0;i<=200000;i++)
		if(flag[i]) ++cnt;
	cout<<cnt<<endl;
	return 0;
}
