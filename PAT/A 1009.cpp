/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/26/2019 10:26:23 PM
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
double f1[1010],f2[1010],res[2010];
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n1,n2,t;
	cin>>n1;
	for(int i=0;i<n1;i++)
		cin>>t,cin>>f1[t]; 
	cin>>n2;
	for(int i=0;i<n2;i++)
		cin>>t,cin>>f2[t];
	for(int i=0;i<=1000;i++)
		for(int j=0;j<=1000;j++)
			res[i+j]+=f1[i]*f2[j];
	int cnt=0;
	for(int i=2000;i>=0;i--)
		if(res[i])
			cnt++;
	cout<<cnt;
	for(int i=2000;i>=0;i--)
		if(res[i])
			cout<<fixed<<setprecision(1)<<" "<<i<<" "<<res[i];
	cout<<endl;
 	return 0;
}

