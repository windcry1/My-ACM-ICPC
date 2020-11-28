#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	#ifdef WindCry1
		freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
	#endif
	int n;cin>>n;
	double res=0,t;
	for(int i=1;i<=n;i++) cin>>t,res+=1.0/t;
	cout<<fixed<<setprecision(2)<<(n/res)<<endl;
	return 0;
}
