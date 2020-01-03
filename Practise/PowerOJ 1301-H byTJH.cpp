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
struct stu{
	char name[21];
	double score;
	double lb;
	double support;
	double time;
	double efficiency;
}node[15];
double cal(stu X)
{
	return (X.score*4+X.lb*3+X.support*2)/X.time;
}
int main()
{
	int x,n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s%lf%lf%lf%lf",node[i].name,&node[i].score,&node[i].lb,&node[i].support,&node[i].time);
		node[i].efficiency=cal(node[i]);
	}
	double MAX=node[0].efficiency;
	for(int i=0;i<n;i++)
	{
		if(node[i].efficiency>MAX)
		{
			MAX=node[i].efficiency;
			x=i;
		}
	}
	printf("%s %.2lf\n",node[x].name,MAX);
	printf("WINNER WINNER,CHICKEN DINNER!\n");
	return 0;
}

