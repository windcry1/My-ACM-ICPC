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
	int n,e,x,y,a[101][101],num[101];
	while(scanf("%d",&n)!=EOF)
	{
		scanf("%d",&e);
		int count=0;
		memset(a,0,sizeof(a));
		memset(num,0,sizeof(num));
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				scanf("%d",&a[i][j]);
		for(int i=0;i<n;i++)
		{ 
			for(int j=0;j<n;j++)
				num[i]+=a[i][j];
			if(num[i]==e)
				count++;
		}
		printf("%d\n",count);
		for(int i=0;i<n;i++)
		{
			if(e==num[i])
				printf("%d",i);
		}
	}
	
	return 0;
}

