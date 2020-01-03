#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i,a[1001];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	cin>>t;
	for(i=0;i<n;i++)
	{
		if(a[i]==t)
		{
			break;
		}
	}
	if(i!=n)
		cout<<i+1<<endl;
	else
		cout<<"-1"<<endl;
	return 0;
}
