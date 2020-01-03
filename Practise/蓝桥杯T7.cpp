#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,a[27][27],flag;
	char book[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	cin>>n>>m;
	for(int i=0;i<n;i++)
		a[i][0]=book[i];
	for(int i=0;i<n;i++)
	{
		if(a[i][0]=='A')
			flag=1;
		else flag=0;
		for(int j=0;j<m;j++)
		{
			if(a[i][j]=='A')
				flag=1;
			if(flag==1)
				a[i][j+1]=a[i][j]+1;
			if(flag==0)
				a[i][j+1]=a[i][j]-1;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<(char)a[i][j];
		}
		cout<<endl;
	}
	return 0;
}
