//Author:LanceYu
#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<fstream>
#include<iosfwd>
#include<vector>
#include<cstdlib>
#include<queue>
#include<set>
#include<ctime>
#include<algorithm>
#include<complex>
#include<cmath>
#include<array>
#include<valarray>
#include<bitset>
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
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	char s[81];
	int t,num,T;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%s",s);
		num=0;t=0;
		int len=strlen(s);
		for(int i=0;i<len;i++)
		{
			if(s[i]=='O')
			{
				num++;
				t+=num;
			}
			else if(s[i]=='X')
				num=0;
		}
		printf("%d\n",t);
	}
	return 0;
}

