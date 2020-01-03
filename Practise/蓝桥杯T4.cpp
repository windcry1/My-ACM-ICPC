#include<bits/stdc++.h>
using namespace std;
int a[1000001]; 
int main()
{
	int n;
	cin>>n;
	a[1]=1;a[2]=1;
	for(int i=3;i<=n;i++)
	{
		a[i]=(a[i-1]+a[i-2])%10007;
	}
	cout<<a[n];
	return 0;
}
