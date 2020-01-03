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
	int l,h,x,num;
	while(scanf("%d%d%d",&l,&h,&x)!=EOF) 
	{
		if(l==0&&h==0&&x==0)
			return 0;
		num=0;
		l-=h;
		num++;
		if(l%(h-x)&&l>0)
			num+=l/(h-x)+1;
		else if(l>0)
			num+=l/(h-x);
		printf("%d\n",num); 
	}
	return 0;
}

