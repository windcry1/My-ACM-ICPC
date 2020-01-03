#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,a[101][101],x,y,k; 
	char s;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	cin>>x>>y>>s>>k;
	while(k--)
	{
		if(a[x][y]==0&&s=='U')
		{
			a[x][y]=1;
			s='L';
			y--;
			continue;
		}
		if(a[x][y]==0&&s=='L')
		{
			a[x][y]=1;
			s='D';
			x++;
			continue;
		}
		if(a[x][y]==0&&s=='D')
		{
			a[x][y]=1;
			s='R';
			y++;
			continue;
		}
		if(a[x][y]==0&&s=='R')
		{
			a[x][y]=1;
			s='U';
			x--;
			continue;
		}
		if(a[x][y]==1&&s=='U')
		{
			a[x][y]=0;
			s='R';
			y++;
			continue;
		}
		if(a[x][y]==1&&s=='R')
		{
			a[x][y]=0;
			s='D';
			x++;
			continue;
		}
		if(a[x][y]==1&&s=='D')
		{
			a[x][y]=0;
			s='L';
			y--;
			continue;
		}
		if(a[x][y]==1&&s=='L')
		{
			a[x][y]=0;
			s='U';
			x--;
			continue;
		}
	}
	cout<<x<<' '<<y<<endl;
	return 0;
}
