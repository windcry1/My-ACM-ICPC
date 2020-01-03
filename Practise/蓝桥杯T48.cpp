#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[6],t,num=0;
	cin>>n; 
	for(int i=10000;i<=99999;i++)
	{
		t=i;
		for(int j=0;j<5;j++)
		{
			a[j]=t%10;
			t/=10;
		}
		if(a[0]==a[4]&&a[3]==a[1]&&(a[0]+a[1]+a[2]+a[3]+a[4])==n)
		{ 
			cout<<i<<endl;
			num++; 
		} 
	}
	for(int i=100000;i<=999999;i++)
	{
		t=i;
		for(int j=0;j<6;j++)
		{
			a[j]=t%10;
			t/=10;
		}
		if(a[0]==a[5]&&a[2]==a[3]&&a[4]==a[1]&&(a[0]+a[1]+a[2]+a[3]+a[4]+a[5])==n)
		{
			cout<<i<<endl;
			num++;
		}
	}
	if(num==0)
		cout<<num-1<<endl;
	return 0;
}
