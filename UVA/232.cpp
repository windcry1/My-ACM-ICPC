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
char a[101][101];
int b[101][101];
int main()
{
	int r,c;
	int times=0;
//	freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
//	freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	while(scanf("%d",&r),r)
	{
		memset(b,0,sizeof(b));
		scanf("%d",&c);
		for(int i=0;i<r;i++)
			scanf("%s",a[i]);
		int time=1;
		for(int i=0;i<r;i++)
			for(int j=0;j<c;j++)
				if(a[i][j]!='*'&&(i<=0||j<=0||a[i-1][j]=='*'||a[i][j-1]=='*'))
					b[i][j]=time++;
		if(times)
			putchar('\n');
		printf("puzzle #%d:\nAcross\n",++times);
//		//////////////////
//		for(int i=0;i<r;i++)
//		{
//			for(int j=0;j<c;j++)
//				printf("%d ",b[i][j]);
//			putchar('\n');
//		}
//		//////////////////
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				if(b[i][j]&&(j<=0||a[i][j-1]=='*'))
				{
					printf("%3d.",b[i][j]);
					for(int k=j;k<c;k++)
					{
						if(a[i][k]!='*')
							putchar(a[i][k]);
						else break;
					}
					putchar('\n');
				}
			}
		}
		printf("Down\n");
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				if(b[i][j]&&(i==0||a[i-1][j]=='*'))
				{
					printf("%3d.",b[i][j]);
					for(int k=i;k<r;k++)
					{
						if(a[k][j]!='*')
							putchar(a[k][j]);
						else break;
					}
					putchar('\n');
				}
			}
		}
	}
	return 0;
}

