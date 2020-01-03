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
bool cmp(int a,int b)
{
	return a>b;
}
int main()
{
	int a[21];
	int n,t=-1;
	for(int i=0;i<15;i++)
		scanf("%d",&a[i]);
	scanf("%d",&n);
	sort(a,a+15,cmp);
	for(int i=0;i<15;i++)
	{
		if(a[i]==n)
		{
			t=i;
			break;
		}
	}
	if(t==-1)
		printf("wucishu!\n");
	else
		printf("%d\n",t+1);
	return 0;
}

