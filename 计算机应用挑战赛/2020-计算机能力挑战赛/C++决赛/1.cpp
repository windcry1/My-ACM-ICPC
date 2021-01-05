#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	int n;cin>>n;
	double a[4];for(int i=0;i<4;i++) cin>>a[i];
	double res=0,k=0;
	for(int i=0;i<n;i++){
		int t1,t2;
		char c;cin>>c>>t1>>t2;
		k+=(double)t2/100*t1;
		switch(c){
			case 'M':
				res+=a[0]/100*t1;break;
			case 'V':
				res+=a[1]/100*t1;break;
			case 'R':
				res+=a[2]/100*max(0,t1-200);break;
			case 'S':
				res+=a[3]/100*t1;break;
		}
	}
	if(k<900) res*=0.9;
	cout<<fixed<<setprecision(2)<<res<<endl;
	return 0;
}
