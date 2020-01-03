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
	int n,a[51][51]={0},t;
	char c;
	while(scanf("%d",&n)!=EOF)
	{
		memset(a,0,sizeof(a));
		int i=0;
		while(1)
		{
			scanf("%d",&t);
			c=getchar();
			a[i][t]=1;
			if(c=='\n')
				i++;
			if(i==n)
				break;
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				printf("%d",a[i][j]);
			}
			printf("\n");
		}
	}
	
	return 0;
}

