#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;cin>>n>>m;
	long long res=0;
	for(int i=1;i<=n+1;i++)
		for(int j=1;j<=m+1;j++){
			int m1=min(i-1,n+1-i),m2=min(j-1,m+1-j);
			res+=m1+m2+2*m1*m2;
		}
	cout<<res<<endl;
	return 0;
}
