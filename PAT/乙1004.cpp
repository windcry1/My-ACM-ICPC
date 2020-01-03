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
	int n,num[1001],min=MMAX,max=0,minn,maxn;
	char a[1001][21],b[1001][21];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		scanf("%s%s%d",&a[i],&b[i],&num[i]);
		if(max<num[i])
		{
			max=num[i];
			maxn=i;
		}
		if(min>num[i])
		{
			min=num[i];
			minn=i;
		}
	}
	printf("%s %s\n",a[maxn],b[maxn]);
	printf("%s %s\n",a[minn],b[minn]);
	return 0;
}

