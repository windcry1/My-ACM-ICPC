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
const int dir[4][2]={0,1,1,0,0,-1,-1,0};
int main()
{
	int n,m,l,r,t,b,a[12][12],x=0;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
        if(x)
            printf("\n");
       	else
            x=1;
		memset(a,0,sizeof(a));
		l=0;r=m-1;t=1;b=n-1;
		int i=0,x=0,y=0,flag=0;
		if(m==1)
			flag=1;
		while(i<n*m)
		{
			a[x][y]=i%10;
			i++;
			x+=dir[flag][0];
			y+=dir[flag][1];
			if(flag==0&&y==r)
			{
				flag=1;
				r--;
			}
			else if(flag==1&&x==b)
			{
				flag=2;
				b--;
			}
			else if(flag==2&&y==l)
			{
				flag=3;
				l++;
			}
			else if(flag==3&&x==t)
			{
				flag=0;
				t++;
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
				printf("%d",a[i][j]);
			printf("\n");
		}
	}
	
	return 0;
}
