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
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
ll a[100010],l[100100],r[100010];
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	while(cin>>n&&n)
	{ 
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			l[i]=i;
			r[i]=i;
		}
		a[n+1]=-1;a[0]=-1;
		for(int i=1;i<=n;i++)
			while(a[l[i]-1]>=a[i])
				l[i]=l[l[i]-1];
		for(int i=n;i>=1;i--)
			while(a[r[i]+1]>=a[i])
				r[i]=r[r[i]+1];
		ll res=0;
		for(int i=1;i<=n;i++)
			res=max(res,a[i]*(r[i]-l[i]+1));
		cout<<res<<endl;
	}
 	return 0;
}

