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
int a[1000001];
int main()
{
 	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,x,y;
	cin>>n;
	int MAX=0;
	while(n--)
	{
		cin>>x>>y;
		for(int i=x;i<y;i++)
			a[i]++;
	}
	for(int i=0;i<1000000;i++)
		if(a[i]>MAX)
			MAX=a[i];
	cout<<MAX<<endl;
 	return 0;
}

