/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/11/2019 5:29:46 PM
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
struct node{
	int d,p;
	inline bool operator <(const node &a) const{
		return d<a.d||d==a.d&&p>a.p;
	}
}a[100010];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i].d>>a[i].p;
	sort(a,a+n);
	ll res=0;
	priority_queue<int,vector<int>,greater<int> > pq;
	for(int i=0;i<n;i++)
	{
		if(a[i].d>=now)
		{
			res+=a[i].p;
			pq.push(a[i].p);
			++now;
		}
		else 
		{
			if(pq.top()<a[i].p)
				res+=a[i].p-pq.top(),pq.pop(),pq.push(a[i].p);
		}
	}
	cout<<res<<endl;
	return 0;
}

