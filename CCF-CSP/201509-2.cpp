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
bool isleap(int n)
{
	return n%4==0&&n%100!=0||n%400==0;
}
int main()
{
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int book[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int y,d;
	cin>>y>>d;
	int i;
	for(i=1;;i++)
	{
		if(d<=book[i])
			break;
		else
		{
			if(i==2&&isleap(y)) d-=book[i]+1;
			else d-=book[i];
		}
	}
	printf("%d\n%d\n",i,d);
	return 0;
}

