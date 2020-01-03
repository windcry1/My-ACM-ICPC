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
char name[10001][21],q[21];
int main()
{
	int n,t;
	while(scanf("%d",&n)!=EOF)
	{
		for(int i=0;i<n;i++)
			scanf("%s",name[i]);
		scanf("%d",&t);
		while(t--)
		{
			scanf("%s",q);
			int num=0;
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<strlen(name[i])-strlen(q)+1;j++)
				{
					int flag=0;
					for(int k=0;k<strlen(q);k++)
					{
						if(name[i][j+k]==q[k])
							flag++;
					}
					if(flag==strlen(q))
					{
						num++;
						break;
					}
				}
			}
			printf("%d\n",num);
		}
	}
	return 0;
}

