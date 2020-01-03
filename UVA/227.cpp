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
	char a[6][6];
	char s[1001],c;
	int x,y,times=0;
	while(1)
	{
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<5;j++)
			{
				scanf("%c",&a[i][j]);
				if(i==0&&j==0&&a[i][j]=='Z')
					return 0;
				if(a[i][j]==' ')
				{
					x=i;y=j;
				}
			}
			getchar();
		}
		if(times)
			putchar('\n');
		printf("Puzzle #%d:\n",++times);
		int q=0;
		while((c=getchar())!='0')
		{
			if(c=='\n'||c==' ')
				continue;
			if(c=='A')
			{
				if(x-1<0)
				{
					q=1;
					continue;
				}
				swap(a[x-1][y],a[x][y]);
				x--;
			}
			else if(c=='B')
			{
				if(x+1>4)
				{
					q=1;
					continue;
				}
				swap(a[x+1][y],a[x][y]);
				x++;
			}
			else if(c=='L')
			{
				if(y-1<0)
				{
					q=1;
					continue;
				}
				swap(a[x][y-1],a[x][y]);
				y--;
			}
			else if(c=='R')
			{
				if(y+1>4)
				{
					q=1;
					continue;
				}
				swap(a[x][y+1],a[x][y]);
				y++;
			}
		}
		getchar();
		if(q)
			printf("This puzzle has no final configuration.\n");
		else
		{
			for(int i=0;i<5;i++)
			{
				for(int j=0;j<5;j++)
				{
					if(j!=4)
						printf("%c ",a[i][j]);
					else
						printf("%c\n",a[i][j]);
				}
			}
		}
	}
	return 0;
}

