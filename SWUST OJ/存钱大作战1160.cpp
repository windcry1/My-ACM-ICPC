#include<bits/stdc++.h>
using namespace std;
int main()
{
	int p,n,a[501],b[501],flagq,flagl,sumq,suml;
	while(cin>>p>>n)
	{
		sumq=0;suml=0;
		flagl=0;flagq=0;
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			cin>>b[i];
		for(int i=0;i<n;i++)
		{
			suml+=a[i];
			sumq+=b[i];
			if(suml>=p&&sumq<p)
			{
				cout<<"xiaoL"<<endl;
				flagl=1;
				break;
			}
			if(sumq>=p&&suml<p)
			{
				cout<<"xiaoQ"<<endl;
				flagq=1;
				break;
			}
			if(sumq>=p&&suml>=p)
			{
				cout<<"Both"<<endl;
				flagl=1;flagq=1;
				break;
			}
		}
			if(flagq==0&&flagl==0)
				cout<<"None"<<endl;
	
	}
	return 0;
}
