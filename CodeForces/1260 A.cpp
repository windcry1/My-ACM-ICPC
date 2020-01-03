#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	int n;cin>>n;
	for(int i=0;i<n;i++){
		ll c,num;
		cin>>c>>num;
		ll t1=num/c,t2=num%c;
		cout<<t1*t1*(c-t2)+(t1+1)*(t1+1)*t2<<endl;
	}
	return 0;
}

