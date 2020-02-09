#include<cstdio>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<cctype>
#include<ctime>
#include<iostream>
#include<string>
#include<map>
#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<iomanip>
#include<list>
#include<bitset>
#include<sstream>
#include<fstream>
#include<complex>
#include<algorithm> 
#if __cplusplus >= 201103L
#include <unordered_map>
#include <unordered_set>
#endif
#define ll long long
using namespace std;
const ll INF = 0x3f3f3f3f3f3f3f3f;
bool prime(int n){
	bool flag=1;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) flag=0;
	}
	//if(n==1) flag=1; 
	return flag;
}
int a[100010]; 
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	int l=0,r=0;
	for(int i=1;i<=t;i++){
		cin>>a[i];
	}
	int st=0;
	if(t%2==0) {
		st=(a[t/2]+a[t/2+1])/2;
	} 
	else st=a[(t+1)/2];
		for(int i=st;i>1;i--){
			if(prime(i)){
				l=i;break;
			}
		}
		//cout<<a[(t+1)/2]<<endl;
		for(int i=st;i;i++){
			if(prime(i)&&i!=1){
				r=i;break;
			}
		}
		//cout<<l<<" "<<r<<endl;
	int len1=0,len2=0;
	for(int i=1;i<=t;i++){
		if(l!=0) len1+=abs(a[i]-l);
		else len1=INF;
		if(r!=0) len2+=abs(a[i]-r);
		else len2=INF;
	}
	cout<<min(len1,len2)<<endl;
    return 0;
}

