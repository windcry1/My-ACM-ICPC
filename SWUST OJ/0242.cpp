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
	char a[1001];
	while(scanf("%d",&n)!=EOF)
	{
		while(n--)
		{
			scanf("%s",a);
			int len=strlen(a);
			for(int i=len-1;i>=1;i--)
			{
				if(a[i]>=5+'0')
				{
					a[i-1]++;
					a[i]='0';
				}
				else if(a[i]<=4+'0')
				{
					a[i]='0';
				}
			}
			if(a[0]==10+'0')
			{
				for(int j=len;j>0;j--)
					a[j]=a[j-1];
				a[len+1]='\0';
				a[0]='1';
				a[1]='0';
			}
			printf("%s\n",a);
		}
	}
	return 0;
}

