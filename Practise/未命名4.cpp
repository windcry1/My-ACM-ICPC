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
//1+3+5+7+..+2*n-1
//1+3+5+7...+2*n-3
int main()
{
	int n,t,result;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&t);
		result=t*t+(t-1)*(t-1);
		printf("%d\n",result);
	}
	return 0;
}

