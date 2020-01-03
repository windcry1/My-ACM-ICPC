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
	int a[4],b[2501][4],k=0,i,j,flag;
	for(i=0;i<50;i++)
	{
		for(j=0;j<50;j++)
		{
			b[k][0]=i+j;
			b[k][1]=i*i+j*j;
			b[k][2]=i*i*i+j*j*j;
			b[k++][3]=i*i*i*i+j*j*j*j;
		}
	}
	while(scanf("%d%d%d%d",&a[0],&a[1],&a[2],&a[3])!=EOF)
	{
		sort(a,a+4);
		flag=0;
		for(i=0;i<2501;i++)
		{
			for(j=0;j<4;j++)
			{
				if(a[j]!=b[i][j])
				{
					break;
				}
			}
			if(j==4)
			{
				flag=1;
				break;
			}
		}
		if(flag)
			printf("Y\n");
		else
			printf("N\n");
	}
	return 0;
}

