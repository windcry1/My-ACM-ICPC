#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[102][102],i,j,x,y,max;
	cin>>n; 
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=i;j++)
			{
				cin>>a[i][j];
			}
		}
		cin>>x>>y;
		max=a[x][y];
		for(i=x;i<n;i++)
		{
			for(j=y;j<i;j++)
			{
				if(max<a[i][j])
					max=a[i][j];
			}
		}
		cout<<max<<endl;
	return 0;
}
