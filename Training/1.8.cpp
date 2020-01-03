#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[10001];
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		n--; 
		cout<<a[n/2]<<endl;
	}
	return 0;
}
