#include<bits/stdc++.h>
using namespace std;
int main()
{
	long double Sn=0;
	int k;
	long long i;
	cin>>k;
	for(i=1;;i++)
	{
		Sn+=1.0/i;
		if(Sn>k)
			break;
	}
	cout<<i<<endl;
	return 0;
}
