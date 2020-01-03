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
int a[2][2001],b[2][2001];
int judge(int x1,int y1,int x2,int y2)
{
	if(x1>=x2&&y2>=y1)
		return y1-x1;
	if(x2>=x1&&y1>=y2)
		return y2-x2;
	if(x1<=x2&&y1>=x2&&y1<=y2)
		return y1-x2;
	if(x2<=x1&&y2>=x1&&y2<=y1)
		return y2-x1;
	if(x1>=x2&&x1<=y2&&y1>=y2)
		return y2-x1;
	if(x2>=x1&&x2<=y1&&y2>=y1)
		return y1-x2;
	return 0;
}
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int sum=0;
		for(int i=0;i<n;i++)
			scanf("%d%d",&a[0][i],&a[1][i]);
		for(int i=0;i<n;i++)
			scanf("%d%d",&b[0][i],&b[1][i]);
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				sum+=judge(a[0][i],a[1][i],b[0][j],b[1][j]);
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}

