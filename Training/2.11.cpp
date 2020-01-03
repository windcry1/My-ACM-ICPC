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
const double PI=3.1415927;
const int MMAX=2147483647;
//priority_queue<int>p;
//priority_queue<int,vector<int>,greater<int> >pq;
int vis[5][5]; 
int main()
{
	int a[5][5];
	int dir[6][3] = {{-1,0,0},{1,0,0},{0,-1,0},{0,1,0},{0,0,-1},{0,0,1}};
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			scanf("%d",&vis[i][j]);
		}
	}
	int x=0,y=0;
	printf("(%d, %d)\n",x,y);
	while(1)
	{
		vis[x][y]=1;
		if(!vis[x][y+1]&&y+1<=4)
		{
			y++;
			printf("(%d, %d)\n",x,y);
		}
		else if(!vis[x+1][y]&&x+1<=4)
		{
			x++;
			printf("(%d, %d)\n",x,y);
		}
		else if(x==4&&y==4)
			break;
	}
	return 0;
}
