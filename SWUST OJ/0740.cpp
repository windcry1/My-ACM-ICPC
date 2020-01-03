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
	char s[201];
	int num,flag;
	while(scanf("%s",s)!=EOF)
	{
		num=0;
		flag=0;
		int len=strlen(s);
		for(int i=0;i<len;i++)
		{
			if(s[i]>='0'&&s[i]<='9')
			{
				flag=1;
				num*=10;
				num+=s[i]-'0';
				if(i==len-1)
					printf("%X\n",num);
			}
			else if(flag==1)
			{
				printf("%X\n",num);
				num=0;
				flag=0;
			}
			else flag=0;
		}
	}
	return 0;
}

