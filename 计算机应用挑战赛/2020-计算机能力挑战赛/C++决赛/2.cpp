#include<bits/stdc++.h>
using namespace std;
int a[1010];
int main(){
	ios::sync_with_stdio(false);
	int n;cin>>n;
	double ave=0;
	for(int i=0;i<n;i++)
		cin>>a[i],ave+=a[i];
	ave/=n;
	for(int i=0;i<n;i++)
		if(abs(a[i])>ave)
			cout<<a[i]<<" \n"[i==n-1];
	return 0;
}
