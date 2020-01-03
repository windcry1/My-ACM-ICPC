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

int main()
{
	int n;
	int t,a;
	char s[1001];
	queue<int> q;
	while(scanf("%d%d",&t,&n)!=EOF)
	{
		int flag=1;
		while(n--)
		{
			scanf("%s",s);
			if(strcmp(s,"in")==0)
			{
				if(flag<t)
				{
					scanf("%d",&a);
					flag++;
					q.push(a);
				}
				else scanf("%d",&a);
			}
			if(strcmp(s,"out")==0)
			{
				q.pop();
				flag--;
			}
		}
		while(!q.empty())
		{
			flag--;
			if(flag!=1)
				printf("%d ",q.front());
			else
				printf("%d\n",q.front());
			q.pop();
		}
	}
	
	return 0;
}

