#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[101];
	cin>>n;
	int num=n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j]&&(a[i]!=0)&&(a[j]!=0))
			{
				a[j]=0;
				num--;
			}
		}
	}
	cout<<num<<endl;
	for(int i=0;i<n-1;i++)
	{
		if(a[i]!=0)
		{
			cout<<a[i]<<' ';
		}
	}
	if(a[n-1]!=a[n-2])
		cout<<a[n-1]<<endl; 
	return 0;
}
