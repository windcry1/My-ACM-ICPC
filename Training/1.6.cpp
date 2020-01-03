#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,k;
	cin>>n;
	for(int j=1;j<=n;j++)
	{
		i=1;
		cin>>k;
		while(k>i)
		{
			k-=i;
			i++;
		}
		k%=9;
		if(k==0)
			k=9;
		cout<<k<<endl;
	}
	return 0;
}
