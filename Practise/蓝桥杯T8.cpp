#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[10001],max=-10001,min=10001,sum=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(max<a[i])
			max=a[i];
		if(min>a[i])
			min=a[i];
		sum+=a[i];
	}
	cout<<max<<endl<<min<<endl<<sum<<endl;
	return 0;
}
