/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/12/2019 5:31:40 PM
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
int first;
pii _minus(int a,int b,int c,int d)
{
	pii res;
	res.first=a*d-b*c;
	res.second=b*d;
	int gcd=__gcd(res.first,res.second);
	res.first/=gcd;res.second/=gcd; 
	return res;
}
void f(int a,int b)
{
	if(b%a==0) {
		cout<<(first?" + ":"")<<1<<"/"<<b/a<<endl,first=1;
		return ;
	}
	else cout<<(first?" + ":"")<<1<<"/"<<b/a+1,first=1;
	pii temp = _minus(a,b,1,b/a+1);
	f(temp.first,temp.second);
}
int main()
{
	//ios::sync_with_stdio(false);
	//cin.tie(0);
	//cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int a,b;
	scanf("%d%*c%d",&a,&b);
	f(a,b);
	return 0;
}

