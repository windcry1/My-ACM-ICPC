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
	int dis[1001],num[1001],n;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)
			return 0;
		dis[0]=n-500;
		int i=1;
		while(dis[i-1]>=0)
		{
			dis[i]=dis[i-1]-500/(2*i+1);
			i++;
		}
		for(int j=i-2;j>=0;j--)
		{
			printf("%d %d %d\n",i-j-1,dis[j],j*500+500);
		}
	}
	
	return 0;
}

