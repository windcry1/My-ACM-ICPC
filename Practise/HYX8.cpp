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
//priority_queue<int>p;
//priority_queue<int,vector<int>,greater<int> >pq;
int a[101][101];
int main()
{
	int t,n,i,squ[4],j,num=0;
	memset(a,0,sizeof(a));
	scanf("%d",&n);
	while(n--)
	{
		for(i=0;i<4;i++)
			scanf("%d",&squ[i]);
		if(squ[0]>squ[2])
		{
			t=squ[0];
			squ[0]=squ[2];
			squ[2]=t;
		}
		if(squ[1]>squ[3])
		{
			t=squ[1];
			squ[1]=squ[3];
			squ[3]=t;
		}
		for(i=squ[0];i<squ[2];i++)
		{
			for(j=squ[1];j<squ[3];j++)
			{
				a[i][j]=1;
			}
		}
	}
	for(i=0;i<101;i++)
	{
		for(j=0;j<101;j++)
		{
			num+=a[i][j];
		}
	}
	printf("%d\n",num);
	return 0;
}

