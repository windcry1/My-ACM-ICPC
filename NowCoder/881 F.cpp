/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/18/2019 12:29:54 PM
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
int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	long double x1,y1,x2,y2,x3,y3;
	while(cin>>x1>>y1>>x2>>y2>>x3>>y3)
	{
		long double a=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
		long double b=(x3-x1)*(x3-x1)+(y3-y1)*(y3-y1);
		long double c=(x2-x3)*(x2-x3)+(y2-y3)*(y2-y3);
		a=sqrt(a);b=sqrt(b);c=sqrt(c);
		long double p=(a+b+c)/2;
		long double s=sqrt(p*(p-a)*(p-b)*(p-c));
		cout<<(ll)(s*22)<<endl;
	}
 	return 0;
}

