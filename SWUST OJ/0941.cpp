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
	int x,y,a[1001];
	scanf("%d",&x);
	for(int i=0;i<x;i++) 
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&y);
	for(int i=x;i<y+x;i++) 
	{
		scanf("%d",&a[i]);
	}
	sort(a,a+x+y);
	for(int i=0;i<y+x;i++)
	{
		if(i!=y+x-1)
			printf("%d ",a[i]);
		else
			printf("%d\n",a[i]);
	}
	return 0;
}

