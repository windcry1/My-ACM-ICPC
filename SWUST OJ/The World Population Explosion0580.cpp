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
struct node
{
	char name[101];
	int former,later,change;
}X[1001];
void SORT(node X[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(X[j].change<X[j+1].change)
			{
				node t=X[j];
				X[j]=X[j+1];
				X[j+1]=t;
			}
			else if(X[j].change==X[j+1].change&&strcmp(X[j].name,X[j+1].name)>0)
			{
				node t=X[j];
				X[j]=X[j+1];
				X[j+1]=t;
			}
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%s",X[i].name);
	for(int i=0;i<n;i++)
		scanf("%d",&X[i].former);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&X[i].later);
		X[i].change=X[i].later-X[i].former;
	}
	SORT(X,n);
	for(int i=0;i<n;i++)
	{
		if(X[i].change>0)
			printf("%d %s\n",X[i].change,X[i].name);
	}
	for(int i=0;i<n;i++)
	{
		if(X[i].change<0)
		printf("%d %s\n",X[i].change,X[i].name);
	}
	for(int i=0;i<n;i++)
	{
		if(X[i].change==0)
		printf("%d %s\n",X[i].change,X[i].name);
	}
	return 0;
}

