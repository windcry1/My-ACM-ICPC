/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/27/2019 11:06:09 PM
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
int fa[2010];
int find(int x)
{
	if(fa[x]==x)
		return x;
	return find(fa[x]);
}
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,m,k,a,b;
	cin>>n>>m>>k;
	for(int i=0;i<=n;i++)
		fa[i]=i;
	while(m--)
	{
		cin>>a>>b;
		if(find(a)!=find(b))
			fa[find(a)]=find(b);
	}
	int t;
	while(k--)
	{
		cin>>t;
		set<int> st;
		for(int i=1;i<=n;i++)
		{
			int p=find(i);
			if(p!=t)
				st.insert(p);
		}
		cout<<st.size()<<endl;
	}
 	return 0;
}

