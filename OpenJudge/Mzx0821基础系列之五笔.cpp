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
char change(char *s)
{
	if(strcmp(s,"gong")==0)
		return 'A';
	if(strcmp(s,"yao")==0)
		return 'S';
	if(strcmp(s,"zai")==0)
		return 'D';
	if(strcmp(s,"di")==0)
		return 'F';
	if(strcmp(s,"yi")==0)
		return 'G';
	if(strcmp(s,"shang")==0)
		return 'H';
	if(strcmp(s,"shi")==0)
		return 'J';
	if(strcmp(s,"zhong")==0)
		return 'K';
	if(strcmp(s,"guo")==0)
		return 'L';
	if(strcmp(s,"tong")==0)
		return 'M';
	if(strcmp(s,"wo")==0)
		return 'Q';
	if(strcmp(s,"ren")==0)
		return 'W';
	if(strcmp(s,"you")==0)
		return 'E';
	if(strcmp(s,"de")==0)
		return 'R';
	if(strcmp(s,"he")==0)
		return 'T';
	if(strcmp(s,"zhu")==0)
		return 'Y';
	if(strcmp(s,"chan")==0)
		return 'U';
	if(strcmp(s,"bu")==0)
		return 'I';
	if(strcmp(s,"wei")==0)
		return 'O';
	if(strcmp(s,"zhe")==0)
		return 'P';
	if(strcmp(s,"jing")==0)
		return 'X';
	if(strcmp(s,"yi")==0)
		return 'C';
	if(strcmp(s,"fa")==0)
		return 'V';
	if(strcmp(s,"liao")==0)
		return 'B';
	if(strcmp(s,"ming")==0)
		return 'N';
}
int main()
{
	int n;
	char s[10];
	while(scanf("%d",&n)!=EOF)
	{
		for(int i=0;i<n;i++)
		{
			scanf("%s",s);
			printf("%c\n",change(s));
		}
	}
	return 0;
}

