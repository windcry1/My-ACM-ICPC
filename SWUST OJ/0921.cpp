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
	int t,n;
	while(scanf("%d",&t)!=EOF)
	{
		while(t--)
		{
			scanf("%d",&n);
			n/=10;
			for(int i=0;i<12;i++)
			{
				if(i==0||i==11)
					printf("+----------+\n");
				else if(i<=10-n)
					printf("|----------|\n");
				else
					printf("|++++++++++|\n");
			}
			printf("===============\n");
		}
	}
	
	return 0;
}

