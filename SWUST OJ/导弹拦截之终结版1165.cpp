#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,height[10001],h;
	while(cin>>n>>h)
	{
		int num=0;
		for(int i=0;i<n;i++)
		{
			cin>>height[i];
			if(height[i]<h)
				num++;
		}
		cout<<num<<"\r\n";
	}
	return 0;
}
