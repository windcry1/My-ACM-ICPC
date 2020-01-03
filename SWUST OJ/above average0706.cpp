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

int main()
{
	int n,t,sum,a[1001];
	cin>>n;
	while(n--)
	{
		sum=0;
		int num=0;
		cin>>t;
		for(int i=0;i<t;i++)
		{
			scanf("%d",&a[i]);
			sum+=a[i];
		}
		double ave=(double)sum/t;
		for(int i=0;i<t;i++)
		{
			if(a[i]>ave)
				num++;
		}
		printf("%.3lf%%\n",double(num)/t*100);
	}

	return 0;
}

