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
	int n,x,y;
	int a[5][6]={1,2,3,4,5,6,
				7,8,9,10,11,12,
				13,14,15,16,17,18,
 				19,20,21,22,23,24,
 				25,26,27,28,29,30};
 	while(scanf("%d",&n)!=EOF)
 	{
 		for(int i=0;i<5;i++)
 		{
			for(int j=0;j<6;j++)
			{
 				if(a[i][j]==n)
 				{
 					x=i;
 					y=j;
				}
			}
		}
		printf("%d %d %d\n",x,y,x+5-y);
	}
	
	return 0;
}

