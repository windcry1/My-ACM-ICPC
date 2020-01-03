/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/11/2019 8:41:40 PM
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
int h[110];
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
		memset(h,0,sizeof h);
		int n,m,k;cin>>n>>m>>k;
		for(int i=0;i<n;i++) cin>>h[i];
		int now=m;
		bool flag=true;
		for(int i=0;i<n-1;i++)
		{
			if(h[i+1]-k>=0)
				now+=k-h[i+1]+h[i];
			else now+=h[i];
			if(now<0)
			{
				cout<<"NO"<<endl;
				flag=false;
				break;
			}
		}
		if(flag) cout<<"YES"<<endl;
	}
	return 0;
}

