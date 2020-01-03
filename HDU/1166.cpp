/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/2/2019 7:43:03 PM
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
const int MAX_N=65536;
int BIT[MAX_N];
int a[MAX_N];
int lowbit(int x)
{
    return x&(-x);
}
void build()
{ 
    for (int i = 1; i <= MAX_N; i++)
    {
        BIT[i] = a[i - 1];
        for (int j = i - 2; j >= i - lowbit(i); j--)
            BIT[i] += a[j];
    }
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
void debug()
{
	cout<<"debug :";
	for(int i=0;i<1<<5;i++)
		cout<<i<<endl;
	cout<<"end debug"<<endl;
}
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
		memset(BIT,0,sizeof BIT);
		memset(a,0,sizeof a);
		int n;
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i],edit(i,a[i]);
		cout<<"Case "<<++times<<":"<<endl;
		string s;
		while(cin>>s&&s!="End")
		{
			if(s=="Query")
			{
				int x,y;
				cin>>x>>y;
				cout<<sum(y)-sum(x-1)<<endl;
			}
			if(s=="Add")
			{
				int x,y;
				cin>>x>>y;
				edit(x,y);
			}
			if(s=="Sub")
			{
				int x,y;
				cin>>x>>y;
				edit(x,-y);
			}
		}
	}
 	return 0;
}

