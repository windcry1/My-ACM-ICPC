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
	char a[1001],b[1001],c1,c2;
	int num1=0,num2=0,t1=0,t2=0;
	scanf("%s %c %s %c",a,&c1,b,&c2);
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]==c1)
			num1++;
	}
	for(int i=0;i<strlen(b);i++)
	{
		if(b[i]==c2)
			num2++;
	}
	while(num1--)
	{
		t1*=10;
		t1+=c1-'0';
	}
	while(num2--)
	{
		t2*=10;
		t2+=c2-'0';
	}
	printf("%d\n",t1+t2);
	return 0;
}

