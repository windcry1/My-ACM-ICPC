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
#include<cctype>
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
	if(c=='C') return 0;
	if(c=='H') return 1;
	if(c=='O') return 2;
	if(c=='N') return 3;
}
int main()
{
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;
	char s[1001];
	double a[4]={12.01,1.008,16.00,14.01};
	scanf("%d",&T);
	while(T--)
	{
		int num;
		double sum=0;
		double result=0;
		scanf("%s",s);
		int len=strlen(s);
		for(int i=0;i<len;i++)
		{
			if(isdigit(s[i])&&isalpha(s[i-1]))
			{
				if(isdigit(s[i+1])&&i!=len-1)
					num=(s[i]-'0')*10+s[i+1]-'0';
				else
					num=s[i]-'0';
				sum+=a[change(s[i-1])]*num;
			}
			if(i!=0&&isalpha(s[i-1])&&isalpha(s[i]))
				sum+=a[change(s[i-1])];
		}
		if(isalpha(s[len-1]))
			sum+=a[change(s[len-1])];
		printf("%.3lf\n",sum);
	}
	return 0;
}

