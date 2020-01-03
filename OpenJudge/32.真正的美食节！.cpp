/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 7/23/2019 8:59:00 PM
*************************************************************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
 	int n;
	double m; 
	while(cin>>n>>m)
	{
		vector<pair<double,double> > v;
		v.clear();
		double a[n+10],b[n+10];
		for(int i=0;i<n;i++)
		{
			cin>>a[i]>>b[i];
			v.push_back(make_pair((a[i]*1.1)/(b[i]*1.5),a[i]*3*1.1));
			v.push_back(make_pair(a[i]/b[i],a[i]*3));
			v.push_back(make_pair((a[i]*0.9)/(b[i]*0.5),a[i]*3*0.9));
		}
		double res=0;
		for(auto i:v)
			res=max(res,min(m*i.first,i.second));
		if(res<=1) cout<<"he is die!"<<endl;
		else cout<<fixed<<setprecision(3)<<res<<endl;
	}
 	return 0;
}

