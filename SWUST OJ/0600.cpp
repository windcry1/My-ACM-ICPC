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
	char name[1001];
	int total;
	int lit;
	int math; 
}x[1001];
bool cmp(node a,node b)
{
	if(a.total>b.total)
		return true;
	else if(a.total==b.total&&a.lit>b.lit)
		return true;
	else if(a.total==b.total&&a.lit==b.lit&&a.math>b.math)
		return true;
	return false;
}
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		for(int i=0;i<n;i++)
			scanf("%s%d%d%d",x[i].name,&x[i].total,&x[i].lit,&x[i].math);
		sort(x,x+n,cmp);
		for(int i=0;i<n;i++)
			printf("%s\n",x[i].name);
	}
	return 0;
}

