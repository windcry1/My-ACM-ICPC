//Author:LanceYu
#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<fstream>
#include<iosfwd>
#include<sstream>
#include<fstream>
#include<cwchar>
#include<iomanip>
#include<ostream>
#include<vector>
#include<cstdlib>
#include<queue>
#include<set>
#include<ctime>
#include<algorithm>
#include<complex>
#include<cmath>
#include<valarray>
#include<bitset>
#include<iterator>
#define ll long long
using namespace std;
const double clf=1e-8;
//const double e=2.718281828;
const double PI=3.141592653589793;
const int MMAX=2147483647;
const int mod=1e9+7;
//priority_queue<int>p;
//priority_queue<int,vector<int>,greater<int> >pq;

int main()
{
	int n,a[100001];
	while(scanf("%d",&n)!=EOF)
	{
		memset(a,0,sizeof(a));
		for(int i=1;i<=n;i++)
		{
			for(int j=i;j<=n;j+=i)
			{
				a[j]=a[j]^1;
			}
		}
		int num=0;
		for(int i=1;i<=n;i++)
		{
			if(a[i])
				num++;
		}
		printf("%d\n",num);
	}
	return 0;
}

