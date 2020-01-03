#include<bits/stdc++.h>
using namespace std;
set<int> st;
int T,n;
void change(int n){
	for(int i=1;i<=sqrt(n);i++){
		st.insert(n/i);
		if(n/i*i<=n&&n/i*(i+1)>n) st.insert(i);
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin>>T;while(T--){
		st.clear();
		cin>>n;
		st.insert(0);
		change(n);
		cout<<st.size()<<endl;
		for(auto i:st) cout<<i<<" ";cout<<endl;
	}
	return 0;
}

