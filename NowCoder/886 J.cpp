/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/3/2019 1:28:14 PM
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
int a[1010][1010];
int c[1010];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T,times=0;
	cin>>T;
	while(T--)
	{
		int n,m;cin>>n>>m;
		int total[1010];
		memset(total,0,sizeof total);
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				cin>>a[i][j];
		for(int i=0;i<m;i++)
			cin>>c[i];
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				total[i]+=a[j][i];
		int res=0,now=0;
		for(int i=0;i<m;i++)
			now-=total[i],now+=c[i],res=max(now,res);
		cout<<"Case #"<<++times<<": "<<res<<endl;
	}
	return 0;
}

