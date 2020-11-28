#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	#ifdef WindCry1
		freopen("C:/Users/LENOVO/Desktop/in.txt","r",stdin);
	#endif
	double t1;int op;double t2;cin>>t1>>op>>t2;
	double res=(op?t1*1.26:t1*2.455);
	cout<<fixed<<setprecision(2)<<res<<" "<<(res>t2?"T_T":"^_^")<<endl;
	return 0;
}
