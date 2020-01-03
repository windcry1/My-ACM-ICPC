#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[4],t;
	for(int i=1000;i<=9999;i++)
	{
		t=i;
		for(int j=0;j<4;j++)
		{
			a[j]=t%10;
			t/=10;
		}
		if(a[0]==a[3]&&a[2]==a[1])
			cout<<i<<endl;
	}
	return 0;
}
