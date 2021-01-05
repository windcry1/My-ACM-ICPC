#include<bits/stdc++.h>
using namespace std;
int x[1010],y[1010],xx[1010];
double k[1010];
const double pi=acos(-1.0);
int main(){
	ios::sync_with_stdio(false);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>x[i]>>y[i];
	for(int i=1;i<=n;i++)
		if(i!=m) {
			k[i]=pi/2-atan((x[i]-x[m])/(y[i]-y[m]));
			if(y[i]-y[m]<0) k[i] += pi;
		}
	double mi=2*pi;
	int pos=-1;
	for(int i=1;i<=n;i++)
		if(i!=m && mi>k[i]) mi=k[i],pos=i;
	cout<<pos<<endl;
	return 0;
}
