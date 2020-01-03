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
int a[1001];
int main()
{
	int n,k,num,peo;
	while(scanf("%d%d",&n,&k)!=EOF)
	{
		int t=n; 
		num=-1;
		peo=0;
		for(int i=1;i<=n;i++)
			a[i]=1;
		while(n>=2)
		{
			num++;
			if(a[num%t+1])
			{
				peo++;
				if(!(peo%k))
				{
					a[num%t+1]=0;
					n--;
				}
			}
		}
		for(int i=1;i<=t;i++)
		{
			if(a[i])
			{
				printf("%d",i);
				//break;
			}
		}
	}
	
	return 0;
}

