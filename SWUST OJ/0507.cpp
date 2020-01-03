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
	int N=1000,t,i,I;
	for(i=1; i<=N; i++)
	{
		t=0;
		for(I=1; I<i; I++)
		{ 
			if(i%I==0) 
			{
				t+=I;
			}
		}
		if(t==i) 
		{
			printf("%d is.\n",i); 
			printf("its factors are:",i);
			for(I=1; I<i; I++)
			{
				if(i%I==0)
				{
					if(I==1)
						printf("%d",I);
					else
						printf(" %d",I);
				}
			}
			printf("\n");
		}
	}
	return 0;
}
