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
	int a,h;
	while(scanf("%d%d",&a,&h)!=EOF)
	{
		for(int i=0;i<h;i++)
		{
			for(int j=0;j<a;j++)
			{
				if(i==0&&j==0||i==0&&j==a-1||i==h-1&&j==0||i==h-1&&j==a-1)
					printf("*");
				else if(i==0||i==h-1)
					printf("-");
				else if(j==0||j==a-1)
					printf("|");
				else
					printf(" ");
			}
			printf("\n");
		}
	}
	
	return 0;
}

