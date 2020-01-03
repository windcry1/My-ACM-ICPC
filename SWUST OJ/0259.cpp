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
int a[1001],b[1001];
int main()
{
	int n,t,r;
	char s[11];
	while(scanf("%d",&n)!=EOF)
	{
		r=-1;
		int i=0,j=0,flag=0;
		while(n--)
		{
			scanf("%d",&t);
			scanf("%s",s);
			if(strcmp(s,"small")==0)
				a[i++]=t;
			if(strcmp(s,"big")==0)
				b[j++]=t;
			if(strcmp(s,"equal")==0)
				r=t;
		}
		sort(a,a+i);
		sort(b,b+j);
		if(b[0]-a[i-1]==2)
			flag=1;
		else if(b[0]>r&&a[i-1]<r)
			flag=1;
		scanf("%s",s);
		if(flag^(strcmp(s,"true")!=0))
			printf("22\n");
		else
			printf("11\n");
	}
	return 0;
}

