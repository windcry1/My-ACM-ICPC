#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,flag;
	cin>>n;
	for(int i=-(2*n+2);i<=(2*n+2);i++)
	{
		for(int j=-(2*n+2);j<=(2*n+2);j++)
		{
			int k;
			flag=0;
			for(k=1;k<=n;k++)
			{
				if((i==2*k+2&&j>=-2*k&&j<=2*k)||(j==2*k&&i>=2*k&&i<=2*k+2)||
				(i==2*k&&j>=2*k&&j<=2*k+2)||(j==2*k+2&&i>=-2*k&&i<=2*k)||
				(i==-2*k&&j>=2*k&&j<=2*k+2)||(j==2*k&&i>=-2*k-2&&i<=-2*k)||
				(i==-2*k-2&&j>=-2*k&&j<=2*k)||(j==-2*k&&i>=-2*k-2&&i<=-2*k)||
				(i==-2*k&&j>=-2*k-2&&j<=-2*k)||(j==-2*k-2&&i>=-2*k&&i<=2*k)||
				(i==2*k&&j>=-2*k-2&&j<=-2*k)||(j==-2*k&&i>=2*k&&i<=2*k+2)||(i>=-2&&i<=2&&j==0)||(j>=-2&&j<=2&&i==0))
				{
					cout<<'$';
					flag=1;
					break;
				}
			}
				if(flag==0)
					cout<<'.';
		}
		cout<<'\n';
	}
	return 0;
}
