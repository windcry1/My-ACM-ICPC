#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	#ifdef WindCry1
		freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
	#endif
	int n,m;cin>>n>>m;
	while(m--){
		string s;cin>>s;
		int res=0;
		for(int i=0;i<n;i++)
			res+=s[i]=='y'?0:1<<n-i-1;
		cout<<res+1<<endl;
	}
	return 0;
}
