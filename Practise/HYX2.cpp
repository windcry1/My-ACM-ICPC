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
	int i,len,j,k,flag;
	char s[1001],a[1001];
	while(scanf("%s",s)!=EOF)
	{
		flag=0;
		j=0;
		len=strlen(s);
		if(len==0)
			return 0;
		for(i=0;i<len;i++)
		{
			if(s[i]=='('||s[i]==')'||s[i]=='['||s[i]==']'||s[i]=='{'||s[i]=='}')
			{
				a[j++]=s[i];
			}
		}//j：括号个数
		for(k=1;k<j;k+=2)
		{ 
			for(i=0;i<j;i++)
			{
				if(a[i]=='('&&a[i+k]==')'||a[i]=='{'&&a[i+k]=='}'||a[i]=='['&&a[i+k]==']')//首先将靠近的去掉，并用'0'替代
				{
					a[i]='0';
					a[i+k]='0';
				}
			}
		}
		for(i=0;i<j;i++)
		{
			if(a[i]!='0')
				flag=1;
		}
		if(flag)
			printf("no\n");
		else
			printf("yes\n");
	}
	return 0;
}

