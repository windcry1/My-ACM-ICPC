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
int monthtoday1(int month)
{
	switch(month)
	{
		case 1:return 31;
		case 2:return 28;
		case 3:return 31;
		case 4:return 30;
		case 5:return 31;
		case 6:return 30;
		case 7:return 31;
		case 8:return 31;
		case 9:return 30;
		case 10:return 31;
		case 11:return 30;
		case 12:return 31;
		default:return -1;
	}
}
int monthtoday2(int month)
{
	switch(month)
	{
		case 1:return 31;
		case 2:return 29;
		case 3:return 31;
		case 4:return 30;
		case 5:return 31;
		case 6:return 30;
		case 7:return 31;
		case 8:return 31;
		case 9:return 30;
		case 10:return 31;
		case 11:return 30;
		case 12:return 31;
		default:return -1;
	}
}
bool date(int y,int m,int d)
{
	if(y>2016||y<1980)
		return false;
	if((y%4==0&&y%100!=0)||y%400==0)//是闰年 
	{
		if(d>0&&d<=monthtoday2(m))
			return true;
		else
			return false;
	}
	else//不是闰年 
	{
		if(d>0&&d<=monthtoday1(m))
			return true;
		else
			return false;
	}
}
bool judge(int a)
{
	int b[5];
	for(int i=0;i<5;i++)
	{
		b[i]=a%10;
		a/=10;
	}
	if(b[0]==b[1]&&b[0]==b[2]&&b[0]==b[3]&&b[0]==b[4])
		return true;
	if(b[1]==b[0]+1&&b[2]==b[0]+2&&b[3]==b[0]+3&&b[4]==b[0]+4)
		return true;
	if(b[1]==b[0]-1&&b[2]==b[0]-2&&b[3]==b[0]-3&&b[4]==b[0]-4)
		return true; 
	return false;
}
int main()
{
	int T,n,a,b,x,y,d,m;
	ll num,sum;
	while(scanf("%d",&T)!=EOF)
	{
		while(T--)
		{
			sum=0;
			scanf("%d%d%d",&n,&a,&b);
			while(n--)
			{
				scanf("%lld",&num);
				if(num/10000000000==0)
					continue;
				x=num%100000;
				d=num%100;
				num/=100;
				m=num%100;
				num/=100;
				y=num%10000;
				if(judge(x)||date(y,m,d))
					sum+=a;
				else
					sum+=b;
			}
			printf("%lld\n",sum);
		}
	}
	return 0;
}

