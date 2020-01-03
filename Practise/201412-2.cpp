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
#include<stack>
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
int a[1001][1001];
int main()
{
	ios::sync_with_stdio(false);
 	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	int count=0,x=0,y=0,flag=0,first=0;
	while(count!=n*n)
	{
		count++;
		printf("%d ",a[x][y]);
		if(!first)
		{
			y++;
			first=1;
			continue;
		}
		else
		{
			if(!flag&&x+1<n&&y-1<0)
			{
				x++;flag=1;
			}
			else if(!flag&&x+1<n&&y-1>=0)
			{
				x++;y--;
			}
			else if(!flag&&x+1>=n&&y-1>=0)
			{
				y++;flag=1;
			}
			else if(!flag&&x+1>=n&&y-1<0)
			{
				y++;flag=1;
			}
			else if(flag&&x-1<0&&y+1<n)
			{
				y++;flag=0;
			}
			else if(flag&&x-1<0&&y+1>=n)
			{
				x++;flag=0;
			}
			else if(flag&&x-1>=0&&y+1>=n)
			{
				x++;flag=0;
			}
			else if(flag&&x-1>=0&&y+1<n)
			{
				x--;y++;
			}
		}
	}
	return 0;
}

