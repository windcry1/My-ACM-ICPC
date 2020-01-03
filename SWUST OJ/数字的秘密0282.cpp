#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[500001],sum=1;
	cin>>n;
	if(n==0)
		cout<<"1"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum=1;
		for(int j=2;j<a[i];j++)
		{
			if(a[i]%j==0)
				sum+=j;
		}
		cout<<sum<<endl;
	}	
	return 0;
}
