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
char a[100001];
int main()
{
	char c;
	int i=0;
	while(c=getchar())
	{
		if(c==EOF)
			break;
		a[i++]=c;
	}
	int len=strlen(a);
	int flag=0;
	for(int i=0;i<len-2;i++)
	{
		if(a[i]=='"')
        {
            flag++;
            if(flag==2)
                flag=0;
            continue;
        }
		if(a[i]=='B'&&a[i+1]=='U'&&a[i+2]=='G')
		{
			for(int j=i;j<len-3;j++)
			{
				a[j]=a[j+3];
			}
			i=-1;
			len-=3;
		}
	}
	for(int i=0;i<len;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}

