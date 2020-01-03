#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,a[20001],b[101];
	while(cin>>n)
	{
		memset(b,0,sizeof(b));
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			if(b[a[i]]>0)
				a[i]=0;
			b[a[i]]++;
		}
		cout<<a[0];
		for(i=1;i<n;i++)
		{
			if(a[i]!=0)
				cout<<' '<<a[i];
		}
		cout<<endl;
	}
	return 0;
}
