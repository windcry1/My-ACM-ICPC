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
struct node{
	char name[101];
	double m;
}x[1000001];
bool cmp(node a,node b)
{
	return a.m>b.m;
}
int main()
{
	int n,k,flag=0;
	while(scanf("%d%d",&n,&k)!=EOF)
	{
        if(!flag)
            flag=1;
        else if(flag)
            printf("\n");
		for(int i=0;i<n;i++)
			scanf("%s%lf",&x[i].name,&x[i].m);
		sort(x,x+n,cmp);
		for(int i=0;i<k;i++)
		{
			printf("%s %g\n",x[i].name,x[i].m);
		}
	}
	
	return 0;
}

