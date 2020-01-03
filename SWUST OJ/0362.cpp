/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/31/2019 3:42:52 PM
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
int a[25];
int n,k;
multiset<int> st;
void dfs(int x,int choice,int val)
{
	if(x==n)
	{
		if(choice==k) st.insert(val);
		return ;
	}
	dfs(x+1,choice+1,val+a[x]);
	dfs(x+1,choice,val);
}
inline bool isprime(int x)
{
	for(int i=2;i<=sqrt(x);i++)
		if(x%i==0)
			return false;
	return true;
}
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	cin>>n>>k;
	for(int i=0;i<n;i++)
		cin>>a[i];
	dfs(0,0,0);
	int cnt=0;
	for(multiset<int>::iterator it=st.begin();it!=st.end();it++)
		if(isprime(*it))
			++cnt;
	cout<<cnt<<endl;
	return 0;
}

