/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/5/2019 10:20:01 PM
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
const int MAX_N=100010;
int BIT[MAX_N];
inline int lowbit(int x)
{
    return x&(-x);
}
void edit(int i, int delta)
{
    for (int j = i; j <= MAX_N; j += lowbit(j))
        BIT[j] += delta;
}
int sum (int k)
{
    int ans = 0;
    for (int i = k; i > 0; i -= lowbit(i))
        ans += BIT[i];
    return ans;
}
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
		int n,k;cin>>n>>k;
		while(k--)
		{
			int tag;cin>>tag;
			if(tag==1)
			{
				int x,y;cin>>x>>y;
				for(int i=x;i<=n;i+=x)
					edit(i,y);
			}
			if(tag==2)
			{
				int x,y;cin>>x>>y;
				cout<<sum(y)-sum(x-1)<<endl;
			}
		}
	}
	return 0;
}

