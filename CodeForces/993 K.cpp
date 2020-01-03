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
#include<list>
#define ll long long
using namespace std;
const double clf=1e-8;
const int MMAX=0x7fffffff;
const int INF=0xfffffff;
const int mod=1e9+7;
struct price{
	int c,d;
	bool operator <(const price a)const{
		return d>a.d;
	}
}x[100010],a[100010];
bool cmp(const price a,const price b)
{
	return a.c<b.c;
}
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>a[i].c>>a[i].d;
	for(int i=0;i<m;i++)
		cin>>x[i].c>>x[i].d;
	sort(x,x+m,cmp);
	sort(a,a+n,cmp);
	ll res=0,cnt=0;
	int j=0;
	multiset<price> st;
	for(int i=0;i<m;i++)
	{
		while(j<n&&a[j].c<=x[i].c)
			st.insert(a[j++]);
		multiset<price>::iterator it=st.lower_bound(x[i]);
		if(it!=st.end())
		{
			st.erase(it);
			cnt++;
			res+=x[i].c;
		}
		if(cnt==n)
			break;
	}
	if(cnt!=n)
		cout<<"-1"<<endl;
	else
		cout<<res<<endl;
 	return 0;
}

