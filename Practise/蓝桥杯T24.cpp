#include<bits/stdc++.h>
using namespace std;
int fun(int a, int b)
{
	if(a%b==0)
		return b;
	else
		return fun(b,a%b);
}
int main()
{
	int a,b,c,t;
	cin>>a>>b>>c;
	t=a*b/fun(a,b);
	t=t*c/fun(t,c);
	cout<<t<<endl; 
	return 0;
}
