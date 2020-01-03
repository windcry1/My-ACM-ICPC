#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	int n;cin>>n;
	for(int i=0;i<n;i++){
		int a[3];for(int j=0;j<3;j++) cin>>a[j];
		sort(a,a+3); a[2]-=a[0];
		cout<<(a[2]<a[1]?(a[1]+a[2])/2+a[0]:a[1]+a[0])<<endl;
	}
	return 0;
}

