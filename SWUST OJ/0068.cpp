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
	char s[101];
	char n[101];
	int age;
}x[1001];
int main()
{
	int i=0;
	while(1)
	{
		scanf("%s%s%d",x[i].s,x[i].n,&x[i].age);
		if(strcmp(x[i].s,"0")==0&&strcmp(x[i].n,"0")==0&&x[i].age==0)
			break;
		i++;
	}
	for(int j=0;j<i;j++)
		printf("%s %s %d \n",x[j].s,x[j].n,x[j].age);
	return 0;
}

