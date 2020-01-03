/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 8/7/2019 5:53:09 PM
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
	ll p,q;
	while(cin>>p>>q&&p&&q)
	{
		ll gcd=__gcd(p,q);
		q/=gcd,p/=gcd;
		// def n = the number of red socks;
		// def m = the number of black socks;
		// the possibility of taking two red socks : n*(n-1)/((n+m-1)*(n+m)) = p/(q-p);
		// p*((n+m-1)*(n+m)) = (q-p)*(n*(n-1));
		// p*(n*n+2*n*m+m*m-n-m) = (q-p)*(n*n-n);
		// figure out : n and m;
		// brute force : enumerate m;
		bool f=true;
		for(int m=1;m<=100000;m++)
		{
			double a=p-(q-p),b=2*m*p-p+q-p,c=-p*m*m-p*m;
			//cout<<a<<" "<<b<<" "<<c<<endl;
			if(b*b-4*a*c<0) continue;
			if(a==0)
			{
				int x=-c/b;
				if(x==(int)x)
				{
					cout<<(int)x<<" "<<m<<endl;
					f=false;
					break;
				}
				continue; 
			}
			double t=(-b+sqrt(b*b-4*a*c))/(2.0*a);
			if(t==(int)t)
			{
				//if(t==1) continue;
				cout<<(int)t<<" "<<m<<endl;
				f=false;
				break;
			}
		}
		cout<<(f?"impossible\n":"");
	}
	return 0;
}

