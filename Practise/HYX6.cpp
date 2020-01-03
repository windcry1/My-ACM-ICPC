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
	char s[201],a[201],t[4];
	int len;
	while(scanf("%s",s)!=EOF)
	{
		while(1)
		{
			scanf("%s",t);
			if(strcmp(t,"cd")==0)
			{
				scanf("%s",a);
				if(strcmp(a,"/")==0)
				{
					memset(s,0,sizeof(s));
					s[0]='/';
				}
				else if(strcmp(a,"..")==0&&strcmp(s,"/")!=0)
				{
					len=strlen(s);
					for(int i=len-1;i>=0;i--)
					{
						if(s[i]!='/')
						{
							s[i]='\0';
						}
						else
						{
							s[i]='\0';
							break;
						}
					}
					if(strcmp(s,"")==0)
						s[0]='/';
				}
				else if(a[0]=='/')
					strcpy(s,a);
				else if(strcmp(s,"/"))
				{
					strcat(s,"/");
					strcat(s,a);
				}
				else if(!strcmp(s,"/")&&strcmp(a,".."))
					strcat(s,a);
			}
			else if(strcmp(t,"pwd")==0)
			{
				printf("%s\n",s);
				break;
			}
			else
			{
				strcpy(s,t);
			}
		}
	}
	return 0;
}

