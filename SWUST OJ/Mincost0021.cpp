#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	double cost; 
	while(cin>>n)
	{
		cost=0;
		if(n==0)
			break;
		while(n>=13)
		{
			n-=8;
			cost+=18;
		}
		if(n<=4)
			cost+=10;
		if(n>4&&n<=8)
			cost+=10+(n-4)*2;
		if(n>8)
			cost+=18+(n-8)*2.4;
		cout<<cost<<endl;	
	}
	return 0;
}
