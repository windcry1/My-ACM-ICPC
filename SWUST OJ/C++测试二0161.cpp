#include<bits/stdc++.h>
using namespace std;
int main()
{
	long double a,b,c,x1,x2;
	while(cin>>a>>b>>c)
	{
		if(a==0)
			cout<<"a=0,error"<<endl;
		else if(b*b-4*a*c<0)
			cout<<"no root"<<endl;
		else
		{
			x1=(-b+sqrt(b*b-4*a*c))/(2.0*a);
			x2=(-b-sqrt(b*b-4*a*c))/(2.0*a);
			cout<<"x1="<<x1<<",x2="<<x2<<endl;
		}
	}
	return 0;
}
