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
int change(char c)
{
	if(c=='!')return 1;
	if(c=='@')return 2;
	if(c=='#')return 3;
	if(c=='$')return 4;
	if(c=='%')return 5;
	if(c=='^')return 6;
	if(c=='&')return 7;
	if(c=='*')return 8;
	if(c=='(')return 9;
	if(c==')')return 0;
	if(c=='1')return '!';
	if(c=='2')return '@';
	if(c=='3')return '#';
	if(c=='4')return '$';
	if(c=='5')return '%';
	if(c=='6')return '^';
	if(c=='7')return '&';
	if(c=='8')return '*';
	if(c=='9')return '(';
	if(c=='0')return ')';
}
int main()
{
	char s[1001],a[1001];
	int num;
	while(scanf("%s",s)!=EOF)
	{
		num=0;
		while(1)
		{
			if(strcmp(s,"?")==0)
				break; 
			else if(strcmp(s,"+")!=0&&strcmp(s,"-")!=0&&strcmp(s,"=")!=0)
			{
				printf("%s ",s);
				int len=strlen(s);
				int temp=0;
				for(int i=0;i<len;i++)
				{
					temp*=10;
					temp+=change(s[i]);
				}
				num+=temp;
				scanf("%s",s);
			}
			else if(strcmp(s,"+")==0)
			{
				printf("+ ");
				scanf("%s",s);
				printf("%s ",s);
				int len=strlen(s);
				int temp=0;
				for(int i=0;i<len;i++)
				{
					temp*=10;
					temp+=change(s[i]);
				}
				num+=temp;
				scanf("%s",s);
			}
			else if(strcmp(s,"-")==0)
			{
				printf("- ");
				scanf("%s",s);
				printf("%s ",s);
				int len=strlen(s);
				int temp=0;
				for(int i=0;i<len;i++)
				{
					temp*=10;
					temp+=change(s[i]);
				}
				num-=temp;
				scanf("%s",s);
			}
			else
			{
				printf("%s ",s);
				scanf("%s",s);
			}
		}
		int i=0;
		while(num!=0)
		{
			a[i++]=num%10+'0';
			num/=10;
		}
		a[i]='\0';
		for(int i=0;i<strlen(a);i++)
			s[i]=a[strlen(a)-i-1];
		for(int i=0;i<strlen(s);i++)
			s[i]=change(s[i]);
		printf("%s\n",s);
	}
	return 0;
}

