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
#include<conio.h>
#include<ctype.h>
#define ll long long
using namespace std;
const double clf=1e-8;
//const double e=2.718281828;
const double PI=3.141592653589793;
const int MMAX=2147483647;
#define N 4
//priority_queue<int>p;
//priority_queue<int,vector<int>,greater<int> >pq;
int f(int n)
{
	if(n==1)return 1;
	else return f(n-1)+1;
}
int main()
{
	int i,j=0;
	for(i=1;i<3;i++)j+=f(i);
	printf("%d\n",j);
	return 0;
}

