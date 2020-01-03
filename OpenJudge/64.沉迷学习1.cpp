#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,a[10001],sum,sumx;
	while(cin>>n)
	{
		sum=0;sumx=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		sort(a,a+n);
		for(i=n-1;i>=0;i--)
		{
			sumx+=a[i];
			if(sum%2==0&&(sumx==sum/2))
			{
				cout<<"Yes!"<<endl;
				break;
			}
			else if(sum%2==1&&(sumx==sum/2||sumx==sum/2+1))
			{
				cout<<"Yes!"<<endl;
				break;
			}
		}
		if(i==-1)
			cout<<"No!"<<endl;
	}
	return 0;
}
