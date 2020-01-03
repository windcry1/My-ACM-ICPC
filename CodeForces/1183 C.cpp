//Author:LanceYu
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

int main()
{
 	ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int q,n,k,a,b,res,p,temp;
	cin>>q;
	while(q--)
	{
		res=0,p=0;
		cin>>n>>k>>a>>b;
		temp=a-b;
		if(n/b<=k&&n%b==0)
		{
			cout<<"-1"<<endl;
			continue;
		}
		else if(n%b!=0&&n/b<k)
		{
			cout<<"-1"<<endl;
			continue;
		}
		n-=k*b;
		if(n%temp==0)
			p=n/temp-1;
		else
			p=n/temp;
		if(p>k)
				p=k;
		cout<<p<<endl;
	}
 	return 0;
}

