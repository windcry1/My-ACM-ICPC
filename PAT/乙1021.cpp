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
	char a[10001];
	int num[10]={0};
	scanf("%s",a);
	for(int i=0;i<strlen(a);i++)
	{
		num[a[i]-'0']++;
	}
	for(int i=0;i<10;i++)
	{
		if(num[i])
		{
			printf("%d:%d\n",i,num[i]);
		}
	}
	return 0;
}

