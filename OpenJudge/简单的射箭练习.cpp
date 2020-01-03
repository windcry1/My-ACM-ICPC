#include<bits/stdc++.h>
using namespace std;
int main()
{
		long double a,b,c,d,ans;
		while(cin >> a >> b >> c >> d)
		{
			if(a==0||c==0)
			ans=0;
			else 
			ans=(a*d)/(a*d+b*c-a*c);
		cout << fixed << setprecision(12) << ans<< endl;
		}
	return 0;
}
