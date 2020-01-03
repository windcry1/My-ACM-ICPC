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
char a[10001],b[10001];
int main()
{
	int x,y;
	scanf("%d",&x);
	getchar();
	for(int i=0;i<x-1;i++)
		scanf("%c ",&a[i]);
	scanf("%c\r\n",&a[x-1]);
	scanf("%d",&y);
	getchar();
	for(int i=0;i<y;i++)
		scanf("%c ",&b[i]);
	for(int i=0;i<x;i++)
		printf("%c ",a[i]);
	for(int i=0;i<y;i++)
	{
		if(i!=y-1)
			printf("%c ",b[i]);
		else
			printf("%c\n",b[i]);
	}
	return 0;
}

