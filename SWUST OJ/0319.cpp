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
bool judge(int i,int j,int k)
{
	int a[10]={0,1,2,3,4,5,6,7,8,9};
	if((i+j)!=k)
		return false;
	else
	{
		while(i!=0)
		{
			a[i%10]=0;
			i/=10;
		}
		while(j!=0)
		{
			a[j%10]=0;
			j/=10;
		}
		while(k!=0)
		{
			a[k%10]=0;
			k/=10;
		}
		for(int t=1;t<10;t++)
		{
			if(a[t]==t)
				return false;
		}
		return true;
	}
}
int main()
{
	for(int i=100;i<988;i++)
	{
		for(int j=i;j<988;j++)
		{
			for(int k=j;k<988;k++)
			{
				if(judge(i,j,k))
				{
					printf("%d %d %d\n",i,j,k);
				}
			}
		}
	}
	
	return 0;
}

