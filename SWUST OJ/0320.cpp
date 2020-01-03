#include<bits/stdc++.h>
using namespace std; 
int main(){
	int T;cin>>T;
	while(T--){
		int t;cin>>t;
		if(t%2) cout<<"0 0"<<endl;
		else cout<<(t%4?t/4+1:t/4)<<" "<<t/2<<endl;
	}
	return 0;
}
