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
int gcd(int a,int b)
{
	if(a%b==0)  
        return b;
	else                   
        return gcd(b,a%b);
}
int main()
{
	int a=2,b=10;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		int G=1;
		for(int i=1;i<b;i++)
		{
			for(int j=a;j<=b;j++)
			{
				if(i<j)
				G*=gcd(i,j);
			}
		}
		printf("%d\n",G);
	}
	return 0;
}

