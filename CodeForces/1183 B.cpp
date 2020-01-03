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
	int q,n,k,a[110];
	cin>>q;
	while(q--)
	{
		cin>>n>>k;
		int MIN=MMAX,MAX=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(MIN>a[i])
				MIN=a[i];
			if(MAX<a[i])
				MAX=a[i];
		}
		if(-k+MAX<=k+MIN)
			cout<<k+MIN<<endl;
		else if(k+MIN<-k+MAX)
			cout<<"-1"<<endl;
	}
 	return 0;
}

