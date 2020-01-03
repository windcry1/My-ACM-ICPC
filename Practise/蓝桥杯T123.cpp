#include<bits/stdc++.h>
using namespace std;
long long n,a[100001],num=0,t,b[100001]={0},c[100001]={0};
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				t=b[j];
				b[j]=b[j+1];
				b[j+1]=t;
				b[j]++;
				b[j+1]++;
				c[j]+=b[j];
				c[j+1]+=b[j+1];
			}
		}
	}
	for(int i=0;i<n;i++)
		num+=c[i];
	cout<<num<<endl;
	return 0;
}
