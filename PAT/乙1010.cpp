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
	int a,b,flag=0;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b!=0)
		{
			if(flag == 0)printf("%d",a*b);
			else printf(" %d",a*b);
			printf(" %d",b-1);
			flag = 1;
		}
	}
	if(flag==0)
		printf("0 0");
	return 0;
}

