#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[100001],b[100001],k,sum=0,min=pow(2,30),max=0,i,x;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
		if(max<a[i])
			max=a[i];
		if(max<b[i])
			max=b[i];
	}
	for(i=max;i>0;i--)
	{
		sum=0;
		for(int j=0;j<n;j++)
		{
			sum+=(a[j]/i)*(b[j]/i);
		}
		if(sum>=k)
			break;
	} 
	cout<<i<<endl;
	return 0;
}
