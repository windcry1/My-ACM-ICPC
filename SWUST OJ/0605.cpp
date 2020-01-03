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
	int m,a[1001],i,b[1001],t,num;
	while(scanf("%d",&m)!=EOF)
	{
		num=0;
		memset(a,0,sizeof(a));
		t=m;
		while(t!=0)
		{
			num++;
			t/=2;
		}
		i=num;
		while(m!=0)
		{
			a[--i]=m%2;
			m/=2;
		}
		b[0]=a[0];
		for(int j=1;j<num;j++)
		{
			b[j]=a[j]^a[j-1];
		}
		for(int i=0;i<num;i++)
			printf("%d",b[i]);
		printf("\n");
	}
	return 0;
}

