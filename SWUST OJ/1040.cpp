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
	int q,w,i=0,a[101]={0},flag=0,Max=0;
	while(scanf("%d,%d",&q,&w)!=EOF)
	{
		if(q==0&&w==0&&flag==0)
			flag=1;
		else if(q==0&&w==0&&flag==1)
			flag=2;
		if(flag==2)
			break;
		a[w]+=q;
		Max=max(Max,w);
	}
	for(int i=0;i<100;i++)
	{
		if(a[i]!=0&&i!=Max)
			printf("%dx^%d+",a[i],i);
		if(a[i]!=0&&i==Max)
			printf("%dx^%d",a[i],i); 
	}
	return 0;
}

