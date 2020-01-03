#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	while(cin>>n)
	{
		if(n==0)
			break;
		for(i=0;;i++)
		{
			if(i*i+i*4>n)
				break;
		}
		cout<<i-1<<endl;
		i--; 
		int sun=0,moon=0,star=0;
		while(i>=16)
		{
			sun++;
			i-=16;
		}
		while(i>=4)
		{
			moon++;
			i-=4;
		}
		star=i;
		cout<<sun<<' '<<moon<<' '<<star<<endl;
	}
	return 0;
}
