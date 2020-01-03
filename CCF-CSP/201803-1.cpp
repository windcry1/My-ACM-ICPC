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
	int sum=0,num=1,flag=0,n;
	while(scanf("%d",&n)&&n)
	{
		if(n==1)
		{
			sum++;
			flag=0;
			num=1;
		}
		if(n==2)
		{
			sum+=2*num;
			num++;
			flag=1;
		}
	}
	printf("%d\n",sum);
	
	return 0;
}

