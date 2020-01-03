/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/6/2019 8:11:18 PM
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
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	double h,s1,v,l,k,n;cin>>h>>s1>>v>>l>>k>>n;
	double t_min=sqrt(2*(h-k-0.00001)/10);
	double t_max=sqrt(2*(h+0.00001)/10);
	if(s1<0)
		t_min-=s1/v,t_max-=s1/v;
	if(s1>n-1)
		t_min-=(s1-n+1)/v,t_max-=(s1-n+1)/v;
	double dis_max=t_min*v;
	double dis_min=t_max*v;
	int ans=0;
	for(int i=0;i<n;i++)
		if(i>=dis_min&&i<=dis_max)
			++ans;
	cout<<ans<<endl;
	return 0;
}

