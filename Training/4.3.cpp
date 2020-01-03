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
//priority_queue<int>p;
//priority_queue<int,vector<int>,greater<int> >pq;
int n,Max;
int sum[101][101];
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<=i;j++)
			{
				scanf("%d",&sum[i][j]);
			}
		}
		for(int i=n-2;i>=0;i--)
		{
			for(int j=0;j<=i;j++)
			{
				sum[i][j]+=max(sum[i+1][j],sum[i+1][j+1]);
			}
		}
		printf("%d\n",sum[0][0]);
	}
	return 0;
}

