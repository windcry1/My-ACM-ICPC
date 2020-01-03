#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long int n,t,i,s;
	long long int a[16]={2,1,2,3,4,5,6,7,8,9,8,7,6,5,4,3};
	cin>>n;
	t=sqrt(2*n);
	for(i=t;i>=0;i--)
	{
		if(i*(i+1)<2*n)
		{
			s=i;
			break;
		}
	}
	s=n-(s*(s+1))/2;
	cout<<a[s%16]<<endl;
	return 0;
}
