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
char s[500010];
int main()
{
	int n,sum1,sum2,sum3;
	while(scanf("%d",&n)!=EOF)
	{
		sum1=0;sum2=0;sum3=0;
		scanf("%s",s); 
		for(int i=0;i<n;i++)
		{
			if(s[i]=='R')
				sum1++;
			else if(s[i]=='W')
				sum2++;
			else if(s[i]=='B')
				sum3++; 
		}
		while(sum1--)
		{ 
			printf("%c",'R');
		}
		while(sum2--)
		{
			printf("%c",'W');
		}
		while(sum3--)
		{
			printf("%c",'B');
		}
		printf("\n");
	}
	return 0;
}

