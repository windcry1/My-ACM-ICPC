/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/9/2019 5:33:21 PM
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
int n,m,dp[110];
struct node{
	int t,h,l;
	bool operator <(const node &a) const{
		return t<a.t;
	}
}x[110];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	cin>>m>>n;
	for(int i=1;i<=n;i++)
		cin>>x[i].t>>x[i].l>>x[i].h;
	sort(x+1,x+n+1);
	dp[0]=10;
	for(int i=1;i<=n;i++)
	{
		for(int j=m;j>=0;j--)
		{
			if(dp[j]>=x[i].t)
			{
				if(j+x[i].h>=m)
	            {
	                cout<<x[i].t<<endl;
	                return 0;
	            }
	            dp[j+x[i].h]=max(dp[j+x[i].h],dp[j]);
	            dp[j]+=x[i].l;
	        }
		}
	}
	cout<<dp[0]<<endl;
	return 0;
}

