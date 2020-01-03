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
//priority_queue<int,vector<int>,greater<int>>pq;
int main()
{
	int n;
	char str[10001];
	scanf("%d",&n);
	getchar();
	for(int i=0;i<n;i++)
	{
		str[i]=getchar();
		str[i+1]='\0';
	}
	for(int i=n-1;i>=0;i--)
	{
		if(i>0)
			cout<<str[i]<<' ';
		if(i==0)
			cout<<str[i];
	}
	cout<<endl;
	return 0;
}
