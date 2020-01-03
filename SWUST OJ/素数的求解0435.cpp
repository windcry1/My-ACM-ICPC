#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num=0,m,k,flag=0;
	cin>>m>>k;
	for(int i=m+1;;i++)
	{
		flag=0;
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0&&num!=k-1)
		{
			cout<<i<<' ';
			num++;
		}
		else if(flag==0&&num==k-1)
		{
			cout<<i;
			num++;
		}
		if(num==k)
			break;
	}
	cout<<endl;
	return 0;
}
