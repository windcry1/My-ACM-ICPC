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
	int n;
	double k,c;
	int a[1001],b[1001];
	while(scanf("%d",&n)!=EOF)
	{
		for(int i=0;i<n;i++)
			scanf("%d%d",&a[i],&b[i]);
		int MAX=0;
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				int num=0;
				for(int k=0;k<n;k++)
				{
					if((a[k]-a[i])*(b[k]-b[j])==(a[k]-a[j])*(b[k]-b[i]))
						num++;
				}
				if(MAX<num)
					MAX=num;
			}
		}
		printf("%d\n",MAX);
	}
	return 0;
}

