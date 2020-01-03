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

int main()
{
	int n,s,sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		s=1;//每次求阶乘之前归为1 
		for(int j=1;j<=i;j++)//求j! 
		{
			s*=j;
		}
		sum+=s;//阶乘之和相加 
	}
	printf("%d\n",sum);
	return 0;
}

