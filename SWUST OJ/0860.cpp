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
	char s[101],c,t[101];
	int pos,len;
	while(scanf("%s",s)!=EOF)
	{
		while(scanf("%s",t)&&strcmp(t,"END")!=0)
		{
			if(strcmp(t,"A")==0)
			{
				getchar();
				scanf("%c %d",&c,&pos);
				len=strlen(s);
				if(len<pos)
				{
					s[len]=c;
					s[len+1]='\0';
				}
				else
				{
					for(int i=len;i>=pos;i--)
						s[i]=s[i-1];
					s[pos-1]=c;
					s[len+1]='\0';
				}
			}
			if(strcmp(t,"B")==0)
			{
				scanf(" %c",&c);
				len=strlen(s);
				for(int i=0;i<len;i++)
				{
					if(s[i]==c)
					{
						for(int j=i;j<len-1;j++)
							s[j]=s[j+1];
						s[len-1]='\0';
						len--;
						i--;
					}
				}
			}
		}
		printf("%s\n",s);
	}
	
	return 0;
}

