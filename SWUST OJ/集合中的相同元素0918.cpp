#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[55],b[55],c[55];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		cin>>b[i];
	int k=0,t;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]==b[j])
			{
				c[k++]=a[i];
				break;
			}
		}
	}
	for(int i=0;i<k-1;i++)
	{
		for(int j=0;j<k-i-1;j++)
		{
			if(c[j]>c[j+1])
			{
				t=c[j];
				c[j]=c[j+1];
				c[j+1]=t;
			}
		}
	}
	cout<<k<<endl;
	for(int i=0;i<k-1;i++)
		cout<<c[i]<<' ';
	if(k!=0)
	cout<<c[k-1]<<endl;
	return 0;
}
