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
	int n,t,len,flag;
	char s[1001];
	while(scanf("%d",&n)!=EOF)
	{
		while(n--)
		{
			flag=0;
			scanf("%s",s);
			len=strlen(s);
			for(int i=0;i<len;i++)
			{
				if(s[i]=='i')
				{
					t=i;
					flag=1;
					break; 
				}
			}
			if(flag)
			{
				for(int i=t+2;i<len-3;i++)
				{
					if(s[i]=='l'&&s[i+1]=='o'&&s[i+2]=='v'&&s[i+3]=='e')
					{
						t=i+3;
						flag=2;
						break; 
					}
				}
			}
			if(flag==2)
			{
				for(int i=t+2;i<len-2;i++)
				{
					if(s[i]=='y'&&s[i+1]=='o'&&s[i+2]=='u')
					{
						flag=3;
						break;
					}
				}
			}
			if(flag==3)
				printf("Yes\n");
			else
				printf("No\n");
		}
	}
	
	return 0;
}

